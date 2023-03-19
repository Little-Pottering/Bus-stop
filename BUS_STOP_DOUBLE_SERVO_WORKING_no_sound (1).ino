
#include <Servo.h>
Servo servoMain; // Define our Servo
Servo servoMain2; // Define our Servo
#define pushButtonPin 2
int buttonPushed =0;
void setup()
{
   servoMain.attach(10); // servo on digital pin 10
   pinMode(pushButtonPin,INPUT_PULLUP);
   servoMain2.attach(9); // servo on digital pin 9
   pinMode(pushButtonPin,INPUT_PULLUP);  
}

void loop()
{
    if(digitalRead(pushButtonPin) == LOW){
    buttonPushed = 1;
    
  }
  if( buttonPushed ){
   servoMain.write(0);  
   delay(1000);          
   servoMain.write(35);   
   delay(2000);          
   servoMain.write(0);  
   delay(1000);          
   servoMain2.write(95); 
   delay(15000);          
   servoMain2.write(0); 
   delay(2000); 
   servoMain2.write(95); 
   delay(1000);          
   
   buttonPushed = 0;
     
  }}
