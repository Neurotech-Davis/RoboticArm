# Importing Libraries 
from serial import Serial
import time 
arduino = Serial(port='COM10', baudrate=96000, timeout=1)

arduino.write('4'.encode('utf-8')) 
time.sleep(1) 