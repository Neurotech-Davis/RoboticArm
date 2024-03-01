#include <Servo.h>

Servo hand;
Servo arm;
Servo elbow;
char userInput;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  hand.attach(2);
  arm.attach(3);
  elbow.attach(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {

    userInput = Serial.read();
    if (userInput == '1') {
      Serial.println('4');
    }
    else if (userInput == '2') {
      Serial.println('5');
    }
    else if (userInput == '3') {
      Serial.println('6');
    }

    
  }
  /*
  for (int i = 0; i<180; i++){
    hand.write(i);
    arm.write(i);
    elbow.write(i);
    delay(10);
  }
  delay(1000);
  hand.write(0);
  arm.write(0);
  elbow.write(0);
  */
}
