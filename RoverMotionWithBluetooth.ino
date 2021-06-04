#include <AFMotor.h>
char t;
AF_DCMotor motor1(9);
AF_DCMotor motor2(10);
AF_DCMotor motor3(11);
AF_DCMotor motor4(12);

void setup() {
  digitalWrite(8,OUTPUT);
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);

  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  Serial.Begin(9600);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }

  if (t == 'F') {          //move forward(all motors rotate in forward direction)
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);

    delay(4000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }

  else if (t == 'B') {    //move reverse (all motors rotate in reverse direction)
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);
    delay(1000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }

  else if (t == 'L') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);

    delay(4000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }

  else if (t == 'R') {    //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);

    delay(4000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }

  else if (t == 'W') {  //turn led on or off)
    digitalWrite(8, HIGH);
  }
  else if (t == 'w') {
    digitalWrite(8, LOW);
  }

  else if (t == 'S') {    //STOP (all motors stop)
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
  }
}
