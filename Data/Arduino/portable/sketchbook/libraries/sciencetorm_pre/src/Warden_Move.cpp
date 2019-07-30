#include "Warden_Move.h"
#include "SSRob_DCMotor.h"

SSRob_DCMotor MotorLeft(PORT1);        // 负速度正转
SSRob_DCMotor MotorRight(PORT10);      // 正速度正转

void move(uint8_t dir, int16_t speed)
{
    if(dir == FORWARD)
    {
        MotorLeft.run(-speed);
        MotorRight.run(speed);
    }
    else if(dir == BACKWARD)
    {
        MotorLeft.run(speed);
        MotorRight.run(-speed);
    }
    else if(dir == TURNLEFT)
    {
        MotorLeft.run(speed);
        MotorRight.run(speed);
    }
    else if(dir == TURNRIGHT)
    {
        MotorLeft.run(-speed);
        MotorRight.run(-speed);
    }
}