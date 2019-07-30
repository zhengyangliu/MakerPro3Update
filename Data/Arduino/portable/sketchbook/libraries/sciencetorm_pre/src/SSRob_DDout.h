#ifndef __SSROB_DDOUT_H
#define __SSROB_DDOUT_H

#include <Arduino.h>
#include "SSRob.h"

class SSRob_DDout
{
public:
    SSRob_Port port;

	SSRob_DDout(uint8_t _p)
    {
        port.SetPort(_p);

        pinMode(port.PortA, OUTPUT);
        pinMode(port.PortB, OUTPUT);
    }

    void write(uint8_t side, uint8_t level);
};

#endif