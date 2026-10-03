#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

extern uint8_t motorPin1;
extern uint8_t motorPin2;

void rotateClockwise(int motorPin1, int motorPin2);
void rotateAnticlockwise(int motorPin1, int motorPin2);
void motorRelayPinInit();
void turnOffMottor(int motorPin1, int motorPin2);
#endif
