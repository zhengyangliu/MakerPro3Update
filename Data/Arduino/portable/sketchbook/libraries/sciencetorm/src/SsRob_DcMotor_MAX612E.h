#ifndef __SSROB_DCMOTOR_MX612E_H
#define __SSROB_DCMOTOR_MX612E_H

#include "SsRob_Port.h"

class SsRob_DcMotor_MX612E : public SsRob_Port
{
public:
    SsRob_DcMotor_MX612E(void);
    SsRob_DcMotor_MX612E(uint8_t port);

    void setSpeed(int16_t speed);
};

#endif