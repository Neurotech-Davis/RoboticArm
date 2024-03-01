import serial

connection = serial.Serial('COM3', baudrate=115200, timeout=1)

def sendToBoard(num):
    connection.write(num.encode('utf-8'))

    try:
        boardData = connection.readline().decode('ascii')
    except UnicodeDecodeError:
        boardData = connection.readline().decode('ascii')
    return boardData

while(1):
    userInput = input('Number: ')

    print(sendToBoard(userInput))