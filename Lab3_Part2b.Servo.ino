#include<Servo.h>

Servo myServo; //"holds" servo
int val; //potentiometer input
const int potPin = A0;
const int servoPin = 2;

void setup()
{
  myServo.attach(servoPin);
}

void loop()
{
  val = analogRead(potPin);
  val = map(val, 0, 1023, 0, 180); //servo: 180 degrees
  myServo.write(val); //to make servo move
  delay(15);
}
