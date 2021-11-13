// C++ code
//


int DCMotorPin=5, DCMotorPower=0, temperaturepin=A1, temperaturepin2=A0, tempanalog, tempanalog2;

int val1=0, value2=A2;
int LDR1pin=0, LDR2pin=A3, ledpin1=3,ledpin2=10;


void setup()
{
   pinMode(temperaturepin, INPUT);
   pinMode(temperaturepin2, INPUT);
   pinMode(DCMotorPin, OUTPUT);
   pinMode(LDR1pin, INPUT);
   pinMode(LDR2pin, INPUT);
  
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
}

void loop()
{
  
  tempanalog= analogRead(temperaturepin);
   tempanalog2= analogRead(temperaturepin2);
  
  double tempCel1 = (double)tempanalog/1024*5;
  tempCel1 = tempCel1-0.5;
  tempCel1 = tempCel1 *100;
  
  double tempCel2 = (double)tempanalog2/1024*5;
  tempCel2 = tempCel2-0.5;
  tempCel2 = tempCel2 *100;
  
  if(tempCel1>30 && tempCel2>30)
  {
    DCMotorPower=1000;
  }
  else
    
  {
    DCMotorPower=0;
  }
  
  analogWrite(DCMotorPin,DCMotorPower);
  
  
   val1 = analogRead(LDR1pin);
  value2=analogRead(LDR2pin);

  if ( val1>600 || value2>600)
  {
    digitalWrite(ledpin1, HIGH);
  }
  else  if ( val1<100 && value2<100)
  {
    digitalWrite(ledpin1, HIGH);
    digitalWrite(ledpin2, HIGH);
  }
  else
  {
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
  }
  
}