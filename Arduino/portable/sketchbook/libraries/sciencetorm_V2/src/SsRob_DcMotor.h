#ifndef __SSROB_DCMOTOR_H
#define __SSROB_DCMOTOR_H

#include "SsRob_Port.h"

class SsRob_DcMotor : public SsRob_Port
{
public:
    SsRob_DcMotor(void);
    SsRob_DcMotor(uint8_t port);

    void setSpeed(int16_t speed);
};

#endif