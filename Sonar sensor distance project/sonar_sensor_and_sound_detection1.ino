

int trigger=2;
int echo=3;



void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

}

void loop()
{
  
  long duration, cm, inc;
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigger,LOW);
  duration= pulseIn (echo, HIGH);
 cm=(duration/2)/29.1;
  inc= cm/2.54;
  Serial.print("Distance : ");
  Serial.print(cm);
  Serial.print("cm, ");
  Serial.print(inc);
  Serial.println("in .");
  delay(250); // Wait for 100 millisecond(s)
}