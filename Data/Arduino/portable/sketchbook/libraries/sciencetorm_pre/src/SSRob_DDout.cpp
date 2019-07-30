#include "SSRob_DDout.h"

void SSRob_DDout::write(uint8_t line, uint8_t level)
{
    if (line == LINE_A)
        digitalWrite(port.PortA, level);
    else if (line == LINE_B)
        digitalWrite(port.PortB, level);
}