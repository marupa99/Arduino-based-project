// C++ code
//

int sensor=2;
int state=LOW;
  int val=0;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  val=digitalRead(sensor);
  if(val==HIGH)
  {
     digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
  
  
   if(state==LOW)
  {
     Serial.println("Motion Detected");
     state=HIGH;
   }
    
  
  }
  
  else
  {
     digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    
     if(state==HIGH)
  {
     Serial.println("Motion Stopped");
        state= LOW;
  }
  
  
  }
  
}