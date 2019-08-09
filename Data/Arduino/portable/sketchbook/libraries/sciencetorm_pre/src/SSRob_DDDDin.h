#ifndef __SSROB_DDDDIN_H
#define __SSROB_DDDDIN_H

#include <Arduino.h>
#include "SSRob.h"

#define LINE_C     2
#define LINE_D     3

class SSRob_DDDDin
{
public:
    SSRob_Port port1,port2;

	SSRob_DDDDin(uint8_t _p1, uint8_t _p2)
    {
        port1.SetPort(_p1);
        port2.SetPort(_p2);

        pinMode(port1.PortA, INPUT);
        pinMode(port1.PortB, INPUT);
        pinMode(port2.PortA, INPUT);
        pinMode(port2.PortB, INPUT);
    }

    uint8_t read(uint8_t line);
};

#endif