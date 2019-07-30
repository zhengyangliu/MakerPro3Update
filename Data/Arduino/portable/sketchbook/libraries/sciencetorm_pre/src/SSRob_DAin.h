#ifndef __SSROB_DAIN_H
#define __SSROB_DAIN_H

#include <Arduino.h>
#include "SSRob.h"

class SSRob_DAin
{
public:
    SSRob_Port port;

	SSRob_DAin(uint8_t _p)
    {
        port.SetPort(_p);

        pinMode(port.PortA, INPUT);
        pinMode(port.PortB, INPUT);
    }

    uint16_t read(uint8_t line);
};

#endif