
#include "SsRob_RunButton.h"

SsRob_RunButton::SsRob_RunButton(void) : SsRob_Port(29)
{
    
}

void SsRob_RunButton::wait(void)
{
    while(SsRob_Port::aRead1() <= 512);
}