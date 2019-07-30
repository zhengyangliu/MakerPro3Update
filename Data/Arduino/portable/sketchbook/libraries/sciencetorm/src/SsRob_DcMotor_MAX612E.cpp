
#include "SsRob_DcMotor_MAX612E.h"

SsRob_DcMotor_MX612E::SsRob_DcMotor_MX612E(void) : SsRob_Port(0)
{

}

SsRob_DcMotor_MX612E::SsRob_DcMotor_MX612E(uint8_t port) : SsRob_Port(port)
{

}

void SsRob_DcMotor_MX612E::setSpeed(int16_t speed)
{
    if(speed > 0)
    {
        SsRob_Port::dWrite2(LOW);
        SsRob_Port::aWrite1(speed * 230 / 255 + 25);   /*!< 修正MX612E 反转刹车造成的速度差问题 */
    }
    else
    {
        SsRob_Port::dWrite2(HIGH);
        SsRob_Port::aWrite1(255 + speed);
    }
    
}