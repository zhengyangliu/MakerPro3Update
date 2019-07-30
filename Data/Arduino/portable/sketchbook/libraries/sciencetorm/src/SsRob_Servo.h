#ifndef __SSROB_SERVO_H
#define __SSROB_SERVO_H

#include "SsRob_Port.h"
#include "./thirdpart/Servo/Servo.h"


class SsRob_Servo : public SsRob_Port
{
public:
    SsRob_Servo(void);
    SsRob_Servo(uint8_t port);
    SsRob_Servo(uint8_t port, uint8_t slot);

    void init(void);
    void write(uint8_t angle);

private:
    Servo servo;
};

#endif