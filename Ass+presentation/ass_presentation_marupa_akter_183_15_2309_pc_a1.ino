
#include <Servo.h>
Servo myservo;
Servo myservo1;
int trigger=2;
int sensor=4;
int state=LOW;
int val=0;
int echo=3;

void setup(){
  pinMode(sensor,INPUT);
  myservo1.attach(13); 
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  myservo.attach(9); // servo pin no =9. j kono pwm pin er sathe connect korte hbe
  Serial.begin(9600);
 
}

void loop()
{
  
  float duration, cm, inc;
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigger,LOW);
  duration= pulseIn (echo, HIGH);
 cm=(duration/2)/29.1;
  inc= cm/2.54;
  
  if(inc >=20 && inc <=30)
  {
     
    myservo.write(90); 
  }
  else
  {
    myservo.write(0); 
   
  }

  
  
  Serial.print("Distance : ");
  Serial.print(inc);
  Serial.println("in .");
  delay(250); // Wait for 100 millisecond(s)
  
  
  val=digitalRead(sensor);
  if(val==HIGH)
  {
    myservo1.write(90);
    delay(500);
  
  
   if(state==LOW)
  {
     Serial.println("Motion Detected");
      myservo1.write(90);
     state=HIGH;
      delay(500);

     
   }
    
  
  }
  
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
     myservo1.write(0);
    delay(200);
    
     if(state==HIGH)
  {
     Serial.println("Motion Stopped");
        myservo1.write(0);
        state= LOW;
  }
  
  
  }
  
  
  }
