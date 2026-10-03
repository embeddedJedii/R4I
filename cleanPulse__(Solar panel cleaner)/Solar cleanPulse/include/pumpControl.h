#ifndef PUMPCONTROL_H
#define PUMPCONTROL_H

#include <Arduino.h>

extern uint8_t motorPin;

void pumpInit();
void pumpOn();
void pumpOff();

#endif
