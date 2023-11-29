import machine
import network
import socket
import utime


# Variables that force further actions such as start/stop/reset time
short_button = False
long_button = False


def get_template() -> str:
    with open("index.html", "r") as f:
        html = f.read()

    return html


def check_button_click(request):
    global short_button, long_button

    short_button, long_button = False, False

    press_start = "GET /?press=start" in request.decode("utf-8")
    press_restart = "GET /?press=restart" in request.decode("utf-8")

    if press_start:
        print("\nA SHORT click was recorded\n")
        short_button = True

    elif press_restart:
        print("\nA LONG click was recorded\n")
        long_button = True

    print(f"Full request: {request.decode('utf-8')}\n")


def ap_mode(ssid, password):
    ap = network.WLAN(network.AP_IF)
    ap.config(essid=ssid, password=password)
    ap.active(True)

    while not ap.active():
        pass

    print("AP Mode is active. You can now connect.")
    print("IP Address to connect to: " + ap.ifconfig()[0])

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # Creating socket
    s.bind(("", 80))
    s.listen(5)

    led = machine.Pin("LED", machine.Pin.OUT)

    while True:
        client, addr = s.accept()
        request = client.recv(1024)

        print(f"Got a connection from {str(addr)}")

        check_button_click(request)

        # Turn the LED on/off depending on which button was last pressed
        if short_button:
            led.value(1)
            utime.sleep_ms(300)
            led.value(0)

        elif long_button:
            led.value(1)
            utime.sleep_ms(1000)
            led.value(0)

        response = "HTTP/1.1 200 OK\nContent-Type: text/html\n\n" + get_template()
        client.send(response)
        client.close()


ap_mode("pico", "password")
