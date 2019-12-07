//program by Dmytro Kavetskyy _  12-04-2019
//
//Smartphone Control Robotic Car
int lm1 = 2; //left motor output 1
int lm2 = 3; //left motor output 2
int rm1 = 4; //right motor output 1
int rm2 = 5; //right motor output 2
char command; // The bluetooth device will send information stored here

void setup()
{
  Serial.println("Enter AT commands:");
  Serial.begin(38400);
  
}
void loop(){
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    sTOP(); //initialize with motors stoped
    
    switch(command){
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
