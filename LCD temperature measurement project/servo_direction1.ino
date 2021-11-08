// C++ code
//

#include <Servo.h>
 Servo servoMain; // define our serve

void setup()
{
 servoMain.attach(9); //servo on digital pin 9
}

void loop()
{
  
  servoMain.write(45); //left 45 degree
  delay(1000);
  servoMain.write(0); //left to 0 degree
  delay(1000);
  servoMain.write(90); //back to center position 90 degree
  delay(1000);
  servoMain.write(135); //right to 135 degree
  delay(1000);
  servoMain.write(180); //right to 180 degree
  delay(1000);
  servoMain.write(90);  //back to center position 90 degree
  delay(1000);
 
}