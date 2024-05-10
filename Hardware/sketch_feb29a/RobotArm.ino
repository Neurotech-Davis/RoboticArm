/*
  Pinky Finger: Max of 60 Min of 150
  Ring Finger: Max of 10 Min of 110
  Middle Finger: Max of 60 Min of 170
  Index Finger: Max of 110 Min of 20
  Thumb Finger: Max of 90 Min of 150
*/

#include <Servo.h>

Servo wrist;
Servo pinky;
Servo ring;
Servo middle;
Servo index;
Servo thumb;
char userInput;
int i = 0;

void grab() {
  pinky.write(40);
  ring.write(5);
  middle.write(60);
  index.write(110);
  thumb.write(90);
}

void ungrab() {
  pinky.write(150);
  ring.write(110);
  middle.write(170);
  index.write(20);
  thumb.write(150);
}

void right() {
  wrist.write(270);
  delay(3000);
}

void left() {
  wrist.write(0);
  delay(3000);
}

void reset() {
  wrist.write(270);
  pinky.write(150);
  ring.write(110);
  middle.write(170);
  index.write(20);
  thumb.write(150);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  wrist.attach(2);
  pinky.attach(3);
  ring.attach(4);
  middle.attach(5);
  index.attach(6);
  thumb.attach(7);
  reset();
}

void loop() {
  if(Serial.available() > 0) {
    userInput = Serial.parseInt();
    
    if (userInput == 1) {
      grab();
      Serial.print(1);
    }
    else if (userInput == 2) {
      left();
      Serial.print(2);
    }
    else if (userInput == 3) {
      right();
      Serial.print(3);
    }
    else if (userInput == 4) {
      ungrab();
      Serial.print(4);
    }
    else if (userInput == 5){
      reset();
      Serial.print(5);
    }
  }
}
