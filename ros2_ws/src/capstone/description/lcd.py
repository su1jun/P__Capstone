import socket
import serial
import time

hostname = socket.gethostname()
ip_address = socket.gethostbyname(hostname)

ser = serial.Serial('/dev/ttyUSB0', 9600)

time.sleep(2)
print(ip_address)

ser.write(ip_address.encode('utf-8'))

ser.close()