#ifndef __SSROB_SERVO_H
#define __SSROB_SERVO_H

#include <Arduino.h>
#include <SSRob_Servo_HAL.h>
#include "SSRob.h"

class SSRob_Servo
{
public:
    SSRob_Port port;
    SSRob_Servo_HAL _servo;

	SSRob_Servo(uint8_t _p)
    {
        port.SetPort(_p);
    }

    void init(void);
    void write(uint8_t pos);
};

#endif