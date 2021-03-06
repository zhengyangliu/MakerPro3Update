#ifndef __SSROB_ULTRASONIC_H
#define __SSROB_ULTRASONIC_H

#include <Arduino.h>
#include "SSRob.h"

class SSRob_Ultrasonic
{
public:
    SSRob_Port port;

	SSRob_Ultrasonic(uint8_t _p)
    {
        port.SetPort(_p);

        pinMode(port.PortA, INPUT);
        pinMode(port.PortB, INPUT);

        _lastEnterTime = millis();
        _measureFlag = true;
        _measureValue = 0;
    }
    
    double distanceCm(void);
    
private:
    long _lastEnterTime;
    bool _measureFlag;
    long _measureValue;

    long measure(void);
};

#endif