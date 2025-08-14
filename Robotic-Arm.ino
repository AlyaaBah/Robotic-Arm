#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);  
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo1.write(90);
  servo2.write(180);
  servo3.write(230);
  servo4.write(90);
}

void loop() {
  servo4.write(45);
  delay(1000);
  servo4.write(90);
  delay(1000);
  servo3.write(90);
  delay(1000);
  servo3.write(50);
  delay(1000);
  servo1.write(90);
  delay(1000);
  servo1.write(50);
  delay(1000);
}
