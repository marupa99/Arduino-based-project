// C++ code
//
int bulb=2;
void setup()
{
  pinMode(bulb, OUTPUT);
}

void loop()
{
  digitalWrite(bulb, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}