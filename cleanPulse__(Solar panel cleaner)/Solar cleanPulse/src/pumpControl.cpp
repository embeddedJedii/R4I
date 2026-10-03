#include <Arduino.h>
uint8_t motorPin = 8;

void pumpInit() {
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
}

void pumpOn() {
  digitalWrite(motorPin, HIGH);
}

void pumpOff() {
  digitalWrite(motorPin, LOW);
}