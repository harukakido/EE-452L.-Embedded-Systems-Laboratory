#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distance = ultrasonic.read(CM);

  Serial.print("Distance in CM: ");
  Serial.print(distance);
  Serial.print(" cm");

  distance = ultrasonic.read(INC);

  Serial.println();
  Serial.print("Distance in IN: ");
  Serial.print(distance);
  Serial.print(" in");
  Serial.println();
  delay(3000);
}
