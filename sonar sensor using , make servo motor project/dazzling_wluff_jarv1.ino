
#include <Servo.h>
Servo myservo;
int trigger=2;
int echo=3;

void setup(){
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
  
  if(inc >=40 && inc <=60)
  {
    myservo.write(90); 
  }
  else
  {
    myservo.write(0); 
  }

  
  
  Serial.print("Distance : ");
  Serial.print(cm);
  Serial.print("cm, ");
  Serial.print(inc);
  Serial.println("in .");
  delay(250); // Wait for 100 millisecond(s)
  
  
  }
