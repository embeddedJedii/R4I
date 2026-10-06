#include <Arduino.h>

int limitSwitchPin1 = 9; // Define the pin for the limit switch
int limitSwitchPin2 = 10; // Define the pin for the second limit switch

void switchSetup() {
  pinMode(limitSwitchPin1, INPUT); // Set the limit switch pin as input with pull-up resistor
  pinMode(limitSwitchPin2, INPUT); // Set the second limit switch pin as input with pull-up resistor
}

