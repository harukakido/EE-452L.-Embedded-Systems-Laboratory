const int motorPin = 10;
const int potPin = A1;

int val;

void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop()
{
  val = analogRead(potPin);
  
  val = map(val, 0, 1023, 0, 255); //changes 0-1023 to 0-255
  
  analogWrite(motorPin, val);
  //analogWrite(motorPin, 255); //full speed PWM
  //delay(1000);
  //analogWrite(motorPin, 128); //half speed PWM
  //delay(1000);
}
