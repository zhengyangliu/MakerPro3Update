#include "SSRob_Servo.h"

void SSRob_Servo::init(void)
{
    _servo.attach(port.PortA);
}

void SSRob_Servo::write(uint8_t pos)
{
    _servo.write(pos);
}

