const int red = 7;
const int green = 6;

String incoming;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    incoming = Serial.readString();
    Serial.println(incoming);
    
    if (incoming.equals("red"))
    {
      digitalWrite(red, HIGH);
    }

    if (incoming.equals("green"))
    {
      digitalWrite(green, HIGH);
    }

    if (incoming.equals("off"))
    {
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
    }
  }
}
