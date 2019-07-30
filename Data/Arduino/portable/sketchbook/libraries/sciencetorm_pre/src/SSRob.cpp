
#include "SSRob.h"

void SSRob_Port::SetPort(uint8_t _p)
{
    if (_p == PORT1)
    {
        PortA = 3;
        PortB = 2;
    }
    else if (_p == PORT2)
    {
        PortA = 6;
        PortB = 7;
    }
    else if (_p == PORT3)
    {
        PortA = 9;
        PortB = 8;
    }
    else if (_p == PORT4)
    {
        PortA = 12;
        PortB = A2;
    }
    else if (_p == PORT5)
    {
        PortA = 13;
        PortB = A3;
    }
    else if (_p == PORT6)
    {
        PortA = 0;
        PortB = 1;
    }
    else if (_p == PORT7)
    {
        PortA = A4;
        PortB = A5;
    }
    else if (_p == PORT8)
    {
        PortA = 11;
        PortB = A1;
    }
    else if (_p == PORT9)
    {
        PortA = 10;
        PortB = A0;
    }
    else if (_p == PORT10)
    {
        PortA = 5;
        PortB = 4;
    }
}