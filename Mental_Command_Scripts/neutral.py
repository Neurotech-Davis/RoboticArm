# Importing Libraries 
from serial import Serial
import time 
arduino = Serial(port='COM3', baudrate=9600, timeout=1)
while True:
    arduino.write('5'.encode('utf-8'))

<<<<<<< HEAD
    try:
        boardData = arduino.readline().decode('ascii')
    except UnicodeDecodeError:
        boardData = arduino.readline().decode('ascii')
    print(boardData)
    if boardData == '5':
        break
    arduino.close()
=======
arduino.write('5'.encode('utf-8'))

try:
    boardData = arduino.readline().decode('ascii')
except UnicodeDecodeError:
    boardData = arduino.readline().decode('ascii')

arduino.close()
>>>>>>> 751a6eb2f0d3cdcf89646d7bc2cf2c2e346e4dc9
