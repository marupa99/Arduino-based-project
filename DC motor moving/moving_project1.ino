// C++ code
//

int L1=2, L2=3, R1=4 ,R2=5;
void setup()
{
  pinMode(L1, OUTPUT);
   pinMode(L2, OUTPUT); 
  pinMode(R1, OUTPUT);
   pinMode(R2, OUTPUT);
}

void loop()
{
  
  // FORWARD
  digitalWrite(L1, HIGH);
   digitalWrite(L2, LOW);
   digitalWrite(R1,  HIGH);
   digitalWrite(R2, LOW);
  delay(2000);
  
   // BACKWARD
  digitalWrite(L1, LOW);
   digitalWrite(L2, HIGH);
   digitalWrite(R1,   LOW);
   digitalWrite(R2, HIGH);
  delay(2000);
  
 
}