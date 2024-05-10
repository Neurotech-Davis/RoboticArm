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

void setup() {
  // put your setup code here, to run once:
  wrist.attach(2);
  pinky.attach(3);
  ring.attach(4);
  middle.attach(5);
  index.attach(6);
  thumb.attach(7);
}

void reset() {
  wrist.write(270);
  //delay(1000);
  pinky.write(150);
  //delay(1000);
  ring.write(110);
  //delay(1000);
  middle.write(170);
  //delay(1000);
  index.write(20);
  //delay(1000);
  thumb.write(150);
  //delay(5000);
}

void peace() {
  pinky.write(40);
  //delay(1000);
  ring.write(5);
  //delay(1000);
  thumb.write(90);
  //delay(5000);
}

void troll() {
  pinky.write(40);
  delay(1000);
  ring.write(5);
  delay(1000);
  index.write(110);
  delay(5000);
}

void cowabunga() {
  ring.write(5);
  delay(1000);
  middle.write(150);
  delay(1000);
  index.write(110);
  delay(2000);
  wrist.write(40);
  delay(2000);
  wrist.write(270);
  delay(2000);
  wrist.write(40);
  delay(2000);
  wrist.write(270);
  delay(2000);
  wrist.write(40);
  delay(2000);
  wrist.write(270);
  delay(5000);
}

void grab() {
  pinky.write(40);
  //delay(1000);
  ring.write(5);
  //delay(1000);
  middle.write(60);
  //delay(1000);
  index.write(110);
  //delay(1000);
  thumb.write(90);
  //delay(1000);
}

void fingerpoint() {
  pinky.write(40);
  delay(1000);
  ring.write(5);
  delay(1000);
  middle.write(60);
  delay(1000);
  thumb.write(90);
  delay(5000);
}

void loop() {
  /*reset();
  peace();
  reset();
  troll();
  reset();
  fingerpoint();
  reset();
  cowabunga();*/
  reset();
  delay(3000);
  grab();
  delay(10000);
}
