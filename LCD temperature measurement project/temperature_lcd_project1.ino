// C++ code

//library function must associate
#include <LiquidCrystal.h> 

// with the arduino pin no connected serially

LiquidCrystal lcd(12,11,5,4,3,2);

// lcd(rs,en,d4,d5,d6,d7)

void setup()
{
  lcd.begin(16,2); // lcs column 16, row 2 setup
}


void loop()
{
  // code 1 
 // lcd.setCursor(0,0);
 // lcd.print("hi pohely");
 // lcd.setCursor(0,1); // column o , line 1 ( SECOND ROW)
 // lcd.print("id :2309");
  //lcd.print(millis()/1000);
 // delay(500);
  //lcd.clear();
  //delay(500);
  
  // code 2
  
  for (int i=0;i<16;i++)
  {
     lcd.setCursor(0,0);
  lcd.print("hi pohely");
     lcd.setCursor(i,1); // column o , line 1 ( SECOND ROW)
  lcd.print("id :2309");
     delay(500);
  lcd.clear();
  delay(500);
  }
  }
  
