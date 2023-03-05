
//EE452L. Lab 1. Part 1
//PWM-2 LEDs

//analogWrite generates PWM
//0: 0% duty cycle
//127: 50% duty cycle
//255: 100% duty cycle

int LED1 = 5;
int LED2 = 3;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  analogWrite(LED1, 0);
  analogWrite(LED2, 255);
  delay(1000);

  analogWrite(LED1, 127);
  analogWrite(LED2, 127);
  delay(1000);

  analogWrite(LED1, 255);
  analogWrite(LED2, 0);
  delay(1000);

  analogWrite(LED1, 127);
  analogWrite(LED2, 127);
  delay(1000);

  analogWrite(LED1, 0);
  analogWrite(LED2, 255);
  delay(1000);
}
