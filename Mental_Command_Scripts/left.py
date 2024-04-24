# Importing Libraries 
from serial import Serial
import time 
arduino = Serial(port='COM10', baudrate=9600, timeout=1)

arduino.write('2'.encode('utf-8'))

try:
    boardData = arduino.readline().decode('ascii')
except UnicodeDecodeError:
    boardData = arduino.readline().decode('ascii')

time.sleep(1)
