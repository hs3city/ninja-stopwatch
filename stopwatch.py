# Python program to illustrate a stop watch
# using Tkinter
#importing the required libraries
import tkinter as Tkinter
from datetime import datetime
import time
import http.server
import threading

class StopwatchServer(http.server.BaseHTTPRequestHandler):
    def do_GET(self):
        print('GET :D')

        self.send_response(200)
        self.end_headers()
        message = "EHLO"
        self.wfile.write(bytes(message, "utf8"))
        
class ServerThread(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        self.is_server_running = False 
        self.daemon = True

    def run(self):
        server_address = ('', 8000)
        self.httpd = http.server.HTTPServer(server_address, StopwatchServer)
        self.httpd.serve_forever()

INIT = 0

counter = INIT
start_time = time.time_ns()
running = False
def counter_label(label):
    def count():
        if running:
            global counter
           
            tt = time.time_ns() - start_time
            string = str(tt)
            display=string
   
            label['text']=display   # Or label.config(text=display)
   
            # label.after(arg1, arg2) delays by 
            # first argument given in milliseconds
            # and then calls the function given as second argument.
            # Generally like here we need to call the 
            # function in which it is present repeatedly.
            # Delays by 1000ms=1 seconds and call count again.
            label.after(1, count) 
            counter += 1
   
    # Triggering the start of the counter.
    count()     
   
# start function of the stopwatch
def Start(label):
    global running
    running=True
    counter_label(label)
    start['state']='disabled'
    stop['state']='normal'
    reset['state']='normal'
    start_time = time.time_ns()
   
# Stop function of the stopwatch
def Stop():
    global running
    start['state']='normal'
    stop['state']='disabled'
    reset['state']='normal'
    running = False
   
# Reset function of the stopwatch
def Reset(label):
    global counter
    counter=INIT
   
    # If rest is pressed after pressing stop.
    if running==False:      
        reset['state']='disabled'
        label['text']='Welcome!'
   
    # If reset is pressed while the stopwatch is running.
    else:               
        label['text']='Starting...'
   
root = Tkinter.Tk()
root.title("Stopwatch")
   
# Fixing the window size.
root.minsize(width=250, height=70)
label = Tkinter.Label(root, text="Welcome!", fg="black", font="Verdana 30 bold")
label.pack()
f = Tkinter.Frame(root)
start = Tkinter.Button(f, text='Start', width=6, command=lambda:Start(label))
stop = Tkinter.Button(f, text='Stop',width=6,state='disabled', command=Stop)
reset = Tkinter.Button(f, text='Reset',width=6, state='disabled', command=lambda:Reset(label))
f.pack(anchor = 'center',pady=5)
start.pack(side="left")
stop.pack(side ="left")
reset.pack(side="left")
server_thread = ServerThread()
server_thread.start()
root.mainloop()