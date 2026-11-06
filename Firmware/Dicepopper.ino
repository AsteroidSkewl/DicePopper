#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;


void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  Servo1.attach(2);
  Servo2.attach(3);
  Servo3.attach(4);
  Servo4.attach(5);

  Servo1.write(90);
  Servo2.write(90);
  Servo3.write(90);
  Servo4.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(6, HIGH)) {
    Servo1.write(0);
    delay(50);
    Servo2.write(180);
    delay(50);
    Servo3.write(0);
    delay(50);
    Servo4.write(180);
    delay(1000);
    Servo1.write(90);
    delay(50);
    Servo2.write(90);
    delay(50);
    Servo3.write(90);
    delay(50);
    Servo4.write(90);
    delay(1000);
  }
  if (digitalRead(7, HIGH)) {
    Servo1.write(0);
    delay(50);
    Servo2.write(180);
    delay(50);
    Servo3.write(0);
    delay(50);
    Servo4.write(180);
    delay(1000);
    Servo1.write(90);
    delay(50);
    Servo2.write(90);
    delay(50);
    Servo3.write(90);
    delay(50);
    Servo4.write(90);
    delay(31000)
  }
}
