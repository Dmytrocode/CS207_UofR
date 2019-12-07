//program by Dmytro Kavetskyy _  12-04-2019
//
//Smartphone Control Robotic Car
#include <SoftwareSerial.h>
int rm1 = 4; //right  output 1
int rm2 = 5; //right  output 2
int lm1 = 2; //left  output 1
int lm2 = 3; //left  output 2

char c; // The bluetooth device will send information here
SoftwareSerial mySerial(10, 11); // RX, TX
void setup()
{
  Serial.println("Enter AT commands:");
  Serial.begin(38400);
  
}
void loop(){
  
  if(mySerial.available() > 0){ 
    c = mySerial.read(); 
    sTOP(); //initialize with motors stoped
    
    switch(c){
    case 'F':  
      ForWard();
      break;
    case 'B':  
       BackWard();
      break;
    case 'L':  
      Left();
      break;
    case 'R':
      Right();
      break;
    }
  } 
}
void ForWard()
{
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
}
void BackWard()
{
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);
}
void Left()
{
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
}
void Right()
{
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);
}
void sTOP()
{
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, LOW);
}
