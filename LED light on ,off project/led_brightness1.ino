// C++ code
//

int p =12;
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(p, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
// analogWrite(p, 255);
 // delay(1000); // Wait for 1000 millisecond(s)
 //analogWrite(p, 0);
 // delay(1000); // Wait for 1000 millisecond(s)
  for (int i=0;i<=255;i++)
  {
    analogWrite(p, i);
    Serial.println("led on");
  }
}