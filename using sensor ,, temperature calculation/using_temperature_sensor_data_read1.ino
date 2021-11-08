
// ques : how to use distance between the centigrate value and degree. it 6 colum to start and 1 row.okk

//library function must associate
#include <LiquidCrystal.h> 

// with the arduino pin no connected serially

LiquidCrystal lcd(12,11,5,4,3,2);
int t=0;

// lcd(rs,en,d4,d5,d6,d7)

void setup()
{
  pinMode(t,INPUT);
  lcd.begin(16,2); // lcs column 16, row 2 setup
   Serial.begin(9600);
}


void loop()
{
  float val, cel,far,mv;
  val =analogRead(t);
  mv= (val/1024.0)*5000; //5000 holo 5 volt , 5000 milivolt
  cel =mv/10;
  Serial.print("The temperature  is = ");
  Serial.print(cel);
  Serial.print(" *C ");
  Serial.println();
  delay(1000);

  lcd.setCursor(0,0);
  lcd.print("Temperature is :");
  lcd.setCursor(0,1); // column o , line 1 ( SECOND ROW)
  lcd.print(cel);
   lcd.setCursor(6,1); // column 6 , line 1 ( SECOND ROW)
  lcd.print("Deg cel");
  delay(500);
 
  }
  

  
