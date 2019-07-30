
#include "SsRob_OLED.h"

SsRob_OLED::SsRob_OLED(void) : SsRob_Port(0)
{

}

SsRob_OLED::SsRob_OLED(uint8_t port) : SsRob_Port(port)
{

}

void SsRob_OLED::begin(void)
{
    Serial.begin(9600);
}

void SsRob_OLED::show(char* name, double number, char* unit)
{
    Serial.print(name);
    Serial.print("=");
    Serial.print(number);
    Serial.print(unit);
    Serial.println(" ");
}