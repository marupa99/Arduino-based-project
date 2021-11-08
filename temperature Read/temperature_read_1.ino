// C++ code
//

int t=0; // eikhane t jodi loop a giya digital a connect kori tahole computer digital value dekhabe r jodi analog a kori tahole analog value dekhabe
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(t, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  float val, cel,far,mv;
  val =analogRead(t);
  mv= (val/1024.0)*5000; //5000 holo 5 volt , 5000 milivolt
  cel =mv/10;
  far= (cel *9)/5 +32;
  Serial.print("Temperature = ");
  Serial.print(cel);
  Serial.print(" *C ");
  
  
  
  Serial.print("Temperature = ");
   Serial.print(far);
  Serial.print(" *F ");
  Serial.println();
  delay(1000);
}