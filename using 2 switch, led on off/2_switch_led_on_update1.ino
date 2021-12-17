int sw=8;
int sw2=7;
int p2=12;
 int val=0;
 int val2=0;

 void setup()
{
    pinMode(sw, INPUT);
     pinMode(sw2, INPUT);
    pinMode(p2, OUTPUT);
 Serial.begin(9600);
}

void loop()
{

  val= digitalRead(sw);
   val2= digitalRead(sw2);

    Serial.println(val);
  if(val==1)
  {
   Serial.println(val); 
digitalWrite(p2,HIGH);
    delay(100);
  
}
  if(val2==0)
        
  {
    Serial.println(val2);
    digitalWrite(p2,LOW);
       delay(200);
  
  }
    
}