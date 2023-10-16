# Python program to illustrate a stop watch
# using Tkinter

# Based on https://www.geeksforgeeks.org/create-stopwatch-using-python/


import tkinter as Tkinter
from datetime import datetime
import serial
from serial.tools import list_ports
import time
import threading
import sqlite3

class ServerThread(threading.Thread):
    def __init__(self, port):
        threading.Thread.__init__(self)
        self.is_server_running = False
        self.daemon = True
        self.port = port

    def run(self):
        global label
        global running
        global state
        global pause

        self.is_server_running = True
        with serial.Serial(self.port, 115200, timeout=0) as ser:
            while (self.is_server_running):
                s = ser.read(30)
                #if s != b'':
                #    print(s)
                try:
                    cmd = ''
                    message = s.decode('ascii').strip()
                    if len(message) > 0:
                        print(message)
                        if message[0] == "0":
                            cmd = 'FREE'
                            pause = False
                            print("Unpaused")
                        elif message[0] == "1":
                            cmd = 'START'
                            pause = False
                            print("Unpaused")
                        elif message[0] == '2' and not pause:
                            cmd = 'RESET'
                            pause = True
                            print("Paused")
                        print(cmd)
                    else:
                        continue
                    if state == 'BEGIN':
                        if cmd == 'RESET':
                            next_contestant()
                            state = 'CONTEST_0'
                    elif state == 'CONTEST_0':
                        if cmd == 'RESET':
                            next_contestant()
                            state = 'CONTEST_0'
                        elif cmd == 'START':
                            state = "STARTING"
                            ser.write(b'1')
                    elif state == 'STARTING':
                        if cmd == 'RESET':
                            next_contestant()
                            state = 'CONTEST_0'
                        if cmd == 'FREE':
                            Start(label)
                            state = 'RUNNING'
                    elif state == 'RUNNING':
                        if cmd == 'START':
                            Stop()
                            state = 'CONTEST_F'
                    elif state == 'CONTEST_F':
                        if cmd == 'RESET':
                            Reset(label)
                            state = 'CONTEST_0'
                    print(state)
                except UnicodeDecodeError:
                    pass

INIT = 0

welcome_message = "KolekTYw"
contestant = ''
contestant_index = 0

counter = INIT
start_time = time.time_ns()
running = False

state = 'BEGIN'

pause = False
tt = 0

run = 1

data_person_names = [
    ("Niecko", "Grzegorz", 2),
    ("Tatarowicz", "Jan", 1),
]

with sqlite3.connect('contest.db') as con:
    cur = con.cursor()
    cur.execute('''CREATE TABLE contestants
                   (i integer primary key, first_name text, last_name text, class integer)''')
    cur.execute('''CREATE TABLE results
                   (i integer primary key, contestant integer, run integer, time integer, accepted bool)''')
    cur.executemany("INSERT INTO contestants(first_name, last_name, class) VALUES (?, ?, ?)", data_person_names)
    con.commit()

def counter_label(label):
    def count():
        global running
        if running:
            global counter
            global start_time
            global tt

            tt = (time.time_ns() - start_time) // (1000 * 1000)

            dt = datetime.utcfromtimestamp(tt // 1000)

            display=dt.strftime('%M:%S') + '.{:03d}'.format(tt % 1000)

            label['text']=display   # Or label.config(text=display)

            # label.after(arg1, arg2) delays by
            # first argument given in milliseconds
            # and then calls the function given as second argument.
            # Generally like here we need to call the
            # function in which it is present repeatedly.
            # Delays by 1ms and call count again.
            label.after(1, count)
            counter += 1

    # Triggering the start of the counter.
    count()

def next_contestant():
    global contestant
    global contestant_index
    # If this fails, put in some placeholder
    if contestant_index < len(data_person_names):
        contestant = ' '.join(data_person_names[contestant_index][:2])
        contestant_index += 1
        name_plate['text'] = contestant
        label['text'] = '00:00.000'
    else:
        state = 'BEGIN'
        name_plate['text'] = ''
        label['text'] = welcome_message
        contestant_index = 0

def Start(label):
    print("START!")
    global running
    global start_time
    running=True
    counter_label(label)
    start['state']='disabled'
    stop['state']='normal'
    reset['state']='normal'
    start_time = time.time_ns()

def Stop():
    print("STOP!")
    global running
    global tt
    global contestant_index
    global run
    running = False
    start['state'] = 'normal'
    stop['state'] = 'disabled'
    reset['state'] = 'normal'
    print('Saving results')
    with sqlite3.connect('contest.db') as con:
        cur = con.cursor()
        cur.execute('INSERT INTO results(contestant, time, run) VALUES (?, ?, ?)', (contestant_index, tt, run))
        con.commit()

def Reset(label):
    print("RESTART!")
    global counter
    global running
    counter=INIT

    reset['state'] = 'disabled'
    label['text'] = '00:00.000'

ports = list_ports.comports()

root = Tkinter.Tk()
root.title("Ninja Stopwatch")
root.configure(bg='#d41423')
root.attributes("-fullscreen", True)

f=Tkinter.Frame(root, width=300, height=300, bg='#d41423')
f.grid(row=0, column=0, sticky="NW")

label = Tkinter.Label(root, text=welcome_message, bg='#d41423', fg="white", font="Roboto 240 bold")
label.place(relx=0.5, rely=0.7, anchor=Tkinter.CENTER)

name_plate = Tkinter.Label(root, text='', bg='#d41423', fg="white", font="Verdana 120 bold")
name_plate.place(relx=0.5, rely=0.3, anchor=Tkinter.CENTER)

start = Tkinter.Button(f, text='Start', width=6, command=lambda:Start(label))
stop = Tkinter.Button(f, text='Stop', width=6, state='disabled', command=Stop)
reset = Tkinter.Button(f, text='Reset', width=6, state='disabled', command=lambda:Reset(label))
#f.pack(anchor = 'center',pady=5)
#start.pack(side="left")
#stop.pack(side ="left")
#reset.pack(side="left")

for port in ports:
    print(f"Found a Serial port {port.device}")
    server_thread = ServerThread(port.device)
    server_thread.start()

root.mainloop()
