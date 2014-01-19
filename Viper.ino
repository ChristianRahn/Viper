#include <Servo.h>

Servo myMotor;

int joyPinY = 1;
int joyButton = 2;

int inputY = 0;

int valB = 0; // The button doesn't work yet.
int valY = 0;

void setup() {
  
  myMotor.attach(9);
  //pinMode(joyButton, INPUT);
  
  Serial.begin(9600);
  
  Serial.println("Initializing...");
  
}

// Motor requires 10 to arm, but after arming, it will beep 'undetected' at 10.

void loop() {
  
  //valB = digitalRead(joyButton);
  inputY = analogRead(joyPinY);
  
  if (valB == 1) { 
  
    myMotor.write(10);
    Serial.println(10);
  
}
  
  else {
    
    valY = map(inputY, 506, 1023, 10, 180);
    myMotor.write(valY);
    Serial.println(valY);
    
  }
  
}
