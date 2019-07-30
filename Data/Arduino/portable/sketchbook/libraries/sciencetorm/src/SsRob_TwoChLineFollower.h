#ifndef __SSROB_TWOCHALINEFOLLOWER_H
#define __SSROB_TWOCHALINEFOLLOWER_H

#include "SsRob_Port.h"

#define LEFT  1
#define RIGHT 0

class SsRob_TwoChLineFollower : public SsRob_Port
{
public:
    SsRob_TwoChLineFollower(void);
    SsRob_TwoChLineFollower(uint8_t port);

    bool read(uint8_t side);
};

#endif