#ifndef __SSROB_PS2_H
#define __SSROB_PS2_H

#include "SsRob_Port.h"
#include "./thirdpart/PS2X_lib/PS2X_lib.h"

extern uint8_t SsRob_Ps2ReciverPin[4];

class SsRob_PS2 : public SsRob_Port
{
public:
    SsRob_PS2(void);

    void read(void);
    bool isButtonPressed(uint16_t button);
    bool isButtonReleased(uint16_t button);
    bool isButtonKeepPressed(uint16_t button);
    uint8_t getStickAnalog(uint16_t button);

private:
    PS2X ps2;
};

#endif