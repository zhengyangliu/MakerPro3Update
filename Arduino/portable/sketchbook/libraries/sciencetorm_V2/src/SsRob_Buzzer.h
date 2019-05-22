#ifndef __SSROB_BUZZER_H
#define __SSROB_BUZZER_H

#include "SsRob_Port.h"

class SsRob_Buzzer : public SsRob_Port
{
public:
    SsRob_Buzzer(void);
    SsRob_Buzzer(uint8_t port);

    void tone(uint16_t frequency, uint32_t duration = 0);
};

#endif