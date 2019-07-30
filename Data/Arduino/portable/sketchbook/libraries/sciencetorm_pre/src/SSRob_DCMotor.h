#ifndef __SSROB_DCMOTOR_H
#define __SSROB_DCMOTOR_H

#include <Arduino.h>
#include "SSRob.h"

class SSRob_DCMotor
{
public:
    SSRob_Port port;

	SSRob_DCMotor(uint8_t _p)
    {
        port.SetPort(_p);

        pinMode(port.PortA, OUTPUT);        // PWM脚输出占空比0
        analogWrite(port.PortA, 0);

        pinMode(port.PortB, OUTPUT);
        digitalWrite(port.PortB, LOW);      // 方向角输出低
    }

    void run(int16_t speed);
};

#endif