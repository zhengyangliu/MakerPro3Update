

#include "SsRob_RGBLED.h"

SsRob_RGBLED::SsRob_RGBLED(void) : SsRob_Port(0)
{
    rgbled = Adafruit_NeoPixel(1, SsRob_Port::pin1(), NEO_GRB + NEO_KHZ800);
    rgbled.begin();
}

SsRob_RGBLED::SsRob_RGBLED(uint8_t port) : SsRob_Port(port)
{
    rgbled = Adafruit_NeoPixel(1, SsRob_Port::pin1(), NEO_GRB + NEO_KHZ800);
    rgbled.begin();
}

void SsRob_RGBLED::setcolor(uint8_t r, uint8_t g, uint8_t b)
{
    rgbled.setPixelColor(0, rgbled.Color(r, b, g));
    rgbled.show();
}