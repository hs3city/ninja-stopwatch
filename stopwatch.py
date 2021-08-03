import tkinter as Tkinter
from datetime import datetime
import time
import http.server
import threading
from urllib.parse import urlsplit


class StopwatchServer(http.server.BaseHTTPRequestHandler):
    def do_POST(self):
        global label
        global running
        print(self.path)
        url = urlsplit(self.path)

        if url.path == "/press":
            if url.query == "id=1" and not running:
                Start(label)
            elif url.query == "id=2" and running:
                Stop()
        elif url.path == "/hold":
            Reset(label)

        self.send_response(200)
        self.end_headers()
        message = "ACK"
        self.wfile.write(bytes(message, "utf8"))


class ServerThread(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        self.is_server_running = False
        self.daemon = True

    def run(self):
        server_address = ("", 8000)
        self.httpd = http.server.HTTPServer(server_address, StopwatchServer)
        self.httpd.serve_forever()


start_time = None
running = False


def counter_label(label):
    def count():
        if running:
            global counter
            global start_time

            tt = (time.time_ns() - start_time) // (1000 * 1000)

            dt = datetime.utcfromtimestamp(tt // 1000)

            display = dt.strftime("%M:%S") + ".{:02d}".format((tt % 1000) // 10)

            label["text"] = display  # Or label.config(text=display)

            # label.after(arg1, arg2) delays by
            # first argument given in milliseconds
            # and then calls the function given as second argument.
            # Generally like here we need to call the
            # function in which it is present repeatedly.
            # Delays by 1ms and call count again.
            label.after(1, count)

    # Triggering the start of the counter.
    count()


# start function of the stopwatch
def Start(label):
    global running
    global start_time
    running = True
    start_time = time.time_ns()
    counter_label(label)


# Stop function of the stopwatch
def Stop():
    global running
    running = False


# Reset function of the stopwatch
def Reset(label):
    global running
    global start_time
    running = False

    # If rest is pressed after pressing stop.
    label["text"] = "00:00:00"


root = Tkinter.Tk()
root.attributes("-fullscreen", True)
root.configure(background="black")
root.title("Stopwatch")

label = Tkinter.Label(
    root, text="00:00:00", fg="red", bg="black", font="Verdana 240 bold"
)
label.pack(expand=True)
f = Tkinter.Frame(root)

server_thread = ServerThread()
server_thread.start()
root.bind("q", lambda _: root.destroy())
root.mainloop()
