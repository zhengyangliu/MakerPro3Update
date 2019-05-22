#ifndef __SSROB_DHT11_H
#define __SSROB_DHT11_H

#include "SsRob_Port.h"
#include "./thirdpart/Dht11/dht11.h"

class SsRob_DHT11 : public SsRob_Port
{
public:
    SsRob_DHT11(void);
    SsRob_DHT11(uint8_t port);

    void read(void);
    int humidity(void);
    int temperature(void);

private:
    dht11 sensor;
};

#endif