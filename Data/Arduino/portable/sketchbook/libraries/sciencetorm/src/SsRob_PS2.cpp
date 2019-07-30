

#include "SsRob_PS2.h"

SsRob_PS2::SsRob_PS2(void)
{
    ps2.config_gamepad(SsRob_Ps2ReciverPin[0], SsRob_Ps2ReciverPin[1], SsRob_Ps2ReciverPin[2], SsRob_Ps2ReciverPin[3]);
}

void SsRob_PS2::read(void)
{
    ps2.read_gamepad();
}

bool SsRob_PS2::isButtonPressed(uint16_t button)
{
    return ps2.ButtonPressed(button);
}

bool SsRob_PS2::isButtonReleased(uint16_t button)
{
    return ps2.ButtonReleased(button);
}

bool SsRob_PS2::isButtonKeepPressed(uint16_t button)
{
    return ps2.Button(button);
}

uint8_t SsRob_PS2::getStickAnalog(uint16_t button)
{
    return ps2.Analog(button);
}