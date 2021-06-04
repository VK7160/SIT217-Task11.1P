#include <Servo.h> 
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;
int pos6 = 0;

Servo servo_6;
Servo servo_7;
Servo servo_8;
Servo servo_9;
Servo servo_10;
Servo servo_11;

void setup()
{
  servo_6.attach(7, 500, 2500);
  servo_7.attach(8, 500, 2500);
  servo_8.attach(9, 500, 2500);
  servo_9.attach(10, 500, 2500);
  servo_10.attach(11, 500, 2500);
  servo_11.attach(12, 500, 2500);
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos1 = 0; pos1 <= 180; pos1 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_6.write(pos1);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_6.write(pos1);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }

  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos2 = 60; pos2 <= 120; pos2 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_7.write(pos2);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos2 = 120; pos2 >= 60; pos2 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_7.write(pos2);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }

  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos3 = 30; pos3 <= 150; pos3 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_8.write(pos3);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos3 = 150; pos3 >= 30; pos3 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_8.write(pos3);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }

  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos4 = 0; pos4 <= 180; pos4 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos4);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos4 = 180; pos4 >= 0; pos4 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos4);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }

  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos5 = 0; pos5 <= 180; pos5 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_10.write(pos5);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos5 = 180; pos5 >= 0; pos5 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_10.write(pos5);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }

  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos6 = 0; pos6 <= 45; pos6 += 1) {
    // tell servo to go to position in variable 'pos'
    servo_11.write(pos6);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos6 = 45; pos6 >= 0; pos6 -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_11.write(pos6);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}
