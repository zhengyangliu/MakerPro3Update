#ifndef __SSROB_OLED_H
#define __SSROB_OLED_H

#include "SsRob_Port.h"

class SsRob_OLED : public SsRob_Port
{
public:
    SsRob_OLED(void);
    SsRob_OLED(uint8_t port);

    void begin(void);
    void show(char *name, double number, char *unit);
};

#endif