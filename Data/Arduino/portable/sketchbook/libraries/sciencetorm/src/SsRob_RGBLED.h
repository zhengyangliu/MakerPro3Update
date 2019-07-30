#ifndef __SSROB_RGBLED_H
#define __SSROB_RGBLED_H

#include "SsRob_Port.h"
#include "./thirdpart/Adafruit_NeoPixel/Adafruit_NeoPixel.h"


class SsRob_RGBLED : public SsRob_Port
{
public:
    SsRob_RGBLED(void);
    SsRob_RGBLED(uint8_t port);

    void setcolor(uint8_t r, uint8_t g, uint8_t b);

private:
    Adafruit_NeoPixel rgbled;
};

#endif