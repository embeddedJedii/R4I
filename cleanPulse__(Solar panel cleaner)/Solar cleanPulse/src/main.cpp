#include <Arduino.h>
#include "motor.h"
#include "pumpControl.h"
#include "limitSwitch.h"
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
motorRelayPinInit ();
pumpInit();
switchSetup();
}

// void loop() {
  // put your main code here, to run repeatedly:
  //  Serial.print("Result of myFunction: ");
  //  rotateClockwise(motorPin1, motorPin2) ;
  // pumpOn();
  //  delay(10000);
  //  turnOffMottor(motorPin1, motorPin2) ;
  // pumpOff();
  //  delay(2000);
  //   rotateAnticlockwise(motorPin1, motorPin2) ;
  // pumpOn();
  //   delay(10000);
  //    turnOffMottor(motorPin1, motorPin2) ;
  //   pumpOff();
  //    delay(2000);

    // put your main code here, to run repeatedly:
bool motorClockwise = true;

void loop() {

  if (digitalRead(limitSwitchPin1) == HIGH) {

    // Limit switch 1 reached
    turnOffMottor(motorPin1, motorPin2);
    pumpOff();

    delay(2000);

    // Change direction
    motorClockwise = false;

    rotateAnticlockwise(motorPin1, motorPin2);
    pumpOn();

  }
  else if (digitalRead(limitSwitchPin2) == HIGH) {

    // Limit switch 2 reached
    turnOffMottor(motorPin1, motorPin2);
    pumpOff();

    delay(2000);

    // Change direction
    motorClockwise = true;

    rotateClockwise(motorPin1, motorPin2);
    pumpOn();

  }
  else {

    // Continue in the current direction
    if (motorClockwise == true) {
      rotateClockwise(motorPin1, motorPin2);
    }
    else {
      rotateAnticlockwise(motorPin1, motorPin2);
    }

    pumpOn();
  }
}
// }

// put function definitions here:
