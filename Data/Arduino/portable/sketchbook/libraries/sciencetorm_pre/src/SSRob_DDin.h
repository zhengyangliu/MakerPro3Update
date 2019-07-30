#ifndef __SSROB_DDIN_H
#define __SSROB_DDIN_H

#include <Arduino.h>
#include "SSRob.h"

class SSRob_DDin
{
public:
    SSRob_Port port;

	SSRob_DDin(uint8_t _p)
    {
        port.SetPort(_p);

        pinMode(port.PortA, INPUT);
        pinMode(port.PortB, INPUT);
    }

    uint8_t read(uint8_t line);
};

#endif