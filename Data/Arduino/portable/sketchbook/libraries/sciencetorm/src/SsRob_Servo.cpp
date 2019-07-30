

#include "SsRob_Servo.h"

SsRob_Servo::SsRob_Servo(void) : SsRob_Port(0)
{

}

SsRob_Servo::SsRob_Servo(uint8_t port) : SsRob_Port(port)
{

}

SsRob_Servo::SsRob_Servo(uint8_t port, uint8_t slot) : SsRob_Port(port, slot)
{

}

void SsRob_Servo::init(void)
{
    servo.attach(SsRob_Port::pin());
}

void SsRob_Servo::write(uint8_t angle)
{
    servo.write(angle);
}