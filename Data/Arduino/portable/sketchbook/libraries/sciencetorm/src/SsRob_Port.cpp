

#include "SsRob_Port.h"

SsRob_Port::SsRob_Port(void)
{
    s1 = ssrobPort[0].s1;
    s2 = ssrobPort[0].s2;
    _port = 0;
}

SsRob_Port::SsRob_Port(uint8_t port)
{
    s1 = ssrobPort[port].s1;
    s2 = ssrobPort[port].s2;
    _port = port;
}

SsRob_Port::SsRob_Port(uint8_t port, uint8_t slot)
{
    s1 = ssrobPort[port].s1;
    s2 = ssrobPort[port].s2;
    _port = port;
    _slot = slot;
}

uint8_t SsRob_Port::getPort()
{
    return (_port);
}

uint8_t SsRob_Port::getSlot(void)
{
    return (_slot);
}

bool SsRob_Port::dRead1(uint8_t mode)
{
    bool val;
    pinMode(s1, mode);
    val = digitalRead(s1);
    return (val);
}

bool SsRob_Port::dRead2(uint8_t mode)
{
    bool val;
    pinMode(s2, mode);
    val = digitalRead(s2);
    return (val);
}

bool SsRob_Port::dpRead1(void)
{
    bool val;
    pinMode(s1, INPUT_PULLUP);
    val = digitalRead(s1);
    return (val);
}

bool SsRob_Port::dpRead2(void)
{
    bool val;
    pinMode(s2, INPUT_PULLUP);
    val = digitalRead(s2);
    return (val);
}

void SsRob_Port::dWrite1(bool value)
{
    pinMode(s1, OUTPUT);
    digitalWrite(s1, value);
}

void SsRob_Port::dWrite2(bool value)
{
    pinMode(s2, OUTPUT);
    digitalWrite(s2, value);
}

int16_t SsRob_Port::aRead1(void)
{
    int16_t val;
    pinMode(s1, INPUT);
    val = analogRead(s1);
    return (val);
}

int16_t SsRob_Port::aRead2(void)
{
    int16_t val;
    pinMode(s2, INPUT);
    val = analogRead(s2);
    return (val);
}

void SsRob_Port::aWrite1(int16_t value)
{
    analogWrite(s1, value);
}

void SsRob_Port::aWrite2(int16_t value)
{
    analogWrite(s2, value);
}

void SsRob_Port::reset(uint8_t port)
{
    s1 = ssrobPort[port].s1;
    s2 = ssrobPort[port].s2;
    _port = port;
}

void SsRob_Port::reset(uint8_t port, uint8_t slot)
{
    s1 = ssrobPort[port].s1;
    s2 = ssrobPort[port].s2;
    _port = port;
    _slot = slot;
}

uint8_t SsRob_Port::pin1(void)
{
    return (s1);
}

uint8_t SsRob_Port::pin2(void)
{
    return (s2);
}

uint8_t SsRob_Port::pin(void)
{
    return (_slot == SLOT1 ? s1 : s2);
}

uint8_t SsRob_Port::pin(uint8_t port, uint8_t slot)
{
    return (slot == SLOT1 ? ssrobPort[port].s1 : ssrobPort[port].s2);
}
