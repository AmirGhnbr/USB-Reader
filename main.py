import serial
import time
arduino = serial.Serial('COM8', 115200, timeout=.1)
time.sleep(1)  # give the connection a second to settle
# arduino.write("Hello from Python!")
while True:
    data = arduino.readline()
    if data:
        print(data)  # strip out the new lines for now           .rstrip('\n')
        # (better to do .read() in the long run for this reason
