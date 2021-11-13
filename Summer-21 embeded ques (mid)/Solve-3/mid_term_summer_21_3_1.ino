// C++ code
//

int p1=12, p2=11,p3=10, p4=9, p5=8, p6=7,p7=6, p8=5, p9=4;
int i,j,t;
int k=0, s1=0,s2=0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
   pinMode(p1, OUTPUT);
   pinMode(p2, OUTPUT);
   pinMode(p3, OUTPUT);
   pinMode(p4, OUTPUT);
   pinMode(p5, OUTPUT);
   pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);
  pinMode(p9, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
   Serial.begin(9600);
}

void loop()
{

  // all light will be on serially
 digitalWrite(LED_BUILTIN, HIGH) ;
  delay(300);
  
  
  digitalWrite(p1,HIGH) ;
  delay(300);
  
  
  digitalWrite(p2,HIGH) ;
  delay(300);
  
  digitalWrite(p3,HIGH) ;
  delay(300);
  
  
  digitalWrite(p4,HIGH) ;
  delay(300);
  
  
  digitalWrite(p5,HIGH) ;
 delay(300);
  
  
   digitalWrite(p6,HIGH) ;
  delay(300);
  
  digitalWrite(p7,HIGH) ;
  delay(300);
  
  
  digitalWrite(p8,HIGH) ;
  delay(300);
  
  
  digitalWrite(p9,HIGH) ;
  delay(300);
  
  //led 1 to 6 turning on 0 to 255
  for ( i=0;i<=255;i=i+25)
  {
    
     analogWrite(LED_BUILTIN, i);
       delay(300);
     analogWrite(p1, i);
       delay(300);
     analogWrite(p2, i);
       delay(300);
     analogWrite(p3, i);
       delay(300);
     analogWrite(p4, i);
       delay(300);
     analogWrite(p5, i);
       delay(300);
  }
   
  
  //pushbutton 1
  
  int sv1=digitalRead(s1);
  
  if(sv1==0)
  {
    for(j=1; j<11;j++)
    {
   digitalWrite(LED_BUILTIN, HIGH) ;
 
  digitalWrite(p1,HIGH) ;
 
  digitalWrite(p2,HIGH) ;
  
  digitalWrite(p3,HIGH) ;
  
  digitalWrite(p4,HIGH) ;
  delay(300); // LED-1 -5 BLINKING WITHIN 300ms
  
  digitalWrite(p5,HIGH) ;
 
   digitalWrite(p6,HIGH) ;
  
  digitalWrite(p7,HIGH) ;
  
  digitalWrite(p8,HIGH) ;
  
  digitalWrite(p9,HIGH) ;
  delay(1500);  // LED-6-10 BLINKING WITHIN 1500ms
    
  
          }
  }
    
    //pushbutton 2
    
    int sv2=digitalRead(s2);
  
  if(sv2==0)
  {
    t++;
    delay(20);
    
  }
   
  if(t%2==0)  
    
  {
    digitalWrite(LED_BUILTIN, HIGH) ;
 
  digitalWrite(p1,HIGH) ;
 
  digitalWrite(p2,HIGH) ;
  
  digitalWrite(p3,HIGH) ;
  
  digitalWrite(p4,HIGH) ;
  delay(300); // LED-1 -5 BLINKING on
    
    
    digitalWrite(p5,LOW) ;
 
   digitalWrite(p6,LOW) ;
  
  digitalWrite(p7,LOW) ;
  
  digitalWrite(p8,LOW) ;
  
  digitalWrite(p9,LOW) ;
  delay(300);  // REST 5 TURNING OFF
    
    
    
  }
 else
      
    {
      
   
   digitalWrite(p5,HIGH) ;
 
   digitalWrite(p6,HIGH) ;
  
  digitalWrite(p7,HIGH) ;
  
  digitalWrite(p8,HIGH) ;
  
  digitalWrite(p9,HIGH) ;
  delay(300);  // LED 6-10  ON
   
   digitalWrite(LED_BUILTIN, LOW) ;
 
  digitalWrite(p1,LOW) ;
 
  digitalWrite(p2,LOW) ;
  
  digitalWrite(p3,LOW) ;
  
  digitalWrite(p4,LOW) ;
   
   delay(300); //REST 5 OFF
    }
    
    //PUSHBUTTON END
    
}
   
    
    
    
    
    
    
    