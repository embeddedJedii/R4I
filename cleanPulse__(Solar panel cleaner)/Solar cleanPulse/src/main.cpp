#include <Arduino.h>
#include "motor.h"
#include "pumpControl.h"
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
motorRelayPinInit ();
pumpInit();

}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("Result of myFunction: ");
   rotateClockwise(motorPin1, motorPin2) ;
  pumpOn();
   delay(10000);
   turnOffMottor(motorPin1, motorPin2) ;
  pumpOff();
   delay(2000);
    rotateAnticlockwise(motorPin1, motorPin2) ;
  pumpOn();
    delay(10000);
     turnOffMottor(motorPin1, motorPin2) ;
    pumpOff();
     delay(2000);
}

// put function definitions here:
