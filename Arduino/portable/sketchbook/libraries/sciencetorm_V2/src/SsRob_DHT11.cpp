
#include "SsRob_DHT11.h"

SsRob_DHT11::SsRob_DHT11(void) : SsRob_Port(0)
{
    
}

SsRob_DHT11::SsRob_DHT11(uint8_t port) : SsRob_Port(port)
{
    
}

void SsRob_DHT11::read(void)
{
    sensor.read(SsRob_Port::pin1());
}

int SsRob_DHT11::humidity(void)
{
    return sensor.humidity;
}

int SsRob_DHT11::temperature(void)
{
    return sensor.temperature;
}