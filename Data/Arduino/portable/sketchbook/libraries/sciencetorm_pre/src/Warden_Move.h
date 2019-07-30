#ifndef __WARDEN_MOVE_H
#define __WARDEN_MOVE_H

#include <Arduino.h>
#include "SSRob.h"

#define FORWARD   0
#define BACKWARD  1
#define TURNLEFT  2
#define TURNRIGHT 3

void move(uint8_t dir, int16_t speed);

#endif