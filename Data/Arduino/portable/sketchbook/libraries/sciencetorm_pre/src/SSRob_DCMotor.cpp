#include "SSRob_DCMotor.h"

void SSRob_DCMotor::run(int16_t speed)     // range:-255~255
{
    if (speed >= 0 && speed < 256)
    {
        digitalWrite(port.PortB, 1);
        analogWrite(port.PortA, speed);
    }
    else if(speed < 0 && speed > -256)
    {
        digitalWrite(port.PortB, 0);
        analogWrite(port.PortA, -speed);
    }
}
