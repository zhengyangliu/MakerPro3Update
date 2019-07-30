
#include "SsRob_DcMotor.h"

SsRob_DcMotor::SsRob_DcMotor(void) : SsRob_Port(0)
{

}

SsRob_DcMotor::SsRob_DcMotor(uint8_t port) : SsRob_Port(port)
{

}

void SsRob_DcMotor::setSpeed(int16_t speed)
{
    if(((last_speed > 0) && (speed < 0)) || ((last_speed < 0) && (speed > 0)))
    {
        SsRob_Port::aWrite1(0);
        delay(30);        // 如果前后速度方向不一致，关闭输出延时10ms后再执行
    }

    if(speed > 0)
    {
        SsRob_Port::dWrite2(LOW);
        SsRob_Port::aWrite1(speed);
    }
    else
    {
        SsRob_Port::dWrite2(HIGH);
        SsRob_Port::aWrite1(-speed);
    }
    last_speed = speed;
}