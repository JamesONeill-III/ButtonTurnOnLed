const int ledPin = 13;
cont int inputPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() 
{
  int val = digitalRead(inputPin);
  if (val == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
}
