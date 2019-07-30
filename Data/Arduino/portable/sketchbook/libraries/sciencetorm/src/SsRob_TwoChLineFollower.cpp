
#include "SsRob_TwoChLineFollower.h"

SsRob_TwoChLineFollower::SsRob_TwoChLineFollower(void) : SsRob_Port(0)
{

}

SsRob_TwoChLineFollower::SsRob_TwoChLineFollower(uint8_t port) : SsRob_Port(port)
{

}

bool SsRob_TwoChLineFollower::read(uint8_t side)
{
    if(side == LEFT)
    {
        return SsRob_Port::dRead1();
    }
    else if(side == RIGHT)
    {
        return SsRob_Port::dRead2();
    }
}