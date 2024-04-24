# Importing Libraries 
from serial import Serial
import time 
arduino = Serial(port='COM3', baudrate=9600, timeout=1)
while True:
    arduino.write('4'.encode('utf-8'))

    try:
        boardData = arduino.readline().decode('ascii')
    except UnicodeDecodeError:
        boardData = arduino.readline().decode('ascii')
    print(boardData)
    if boardData == '4':
        break
    time.sleep(1)
