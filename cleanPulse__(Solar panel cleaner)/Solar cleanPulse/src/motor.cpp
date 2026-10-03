#include <Arduino.h>
uint8_t motorPin1 = 6; // Pin connected to IN1 of the motor driver
uint8_t motorPin2 = 7; // Pin connected to IN2 of the motor
void rotateClockwise(int motorPin1, int motorPin2) {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
}

void rotateAnticlockwise(int motorPin1, int motorPin2) {
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
}
void turnOffMottor(int motorPin1, int motorPin2) {
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
}
void motorRelayPinInit (){
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
} 