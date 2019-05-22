
#include "SsRob_Buzzer.h"

SsRob_Buzzer::SsRob_Buzzer(void) : SsRob_Port(0)
{

}

SsRob_Buzzer::SsRob_Buzzer(uint8_t port) : SsRob_Port(port)
{

}

void SsRob_Buzzer::tone(uint16_t frequency, uint32_t duration)
{
  int period = 1000000L / frequency;
  int pulse = period / 2;

  pinMode(SsRob_Port::pin1(), OUTPUT);

  for (long i = 0; i < duration * 1000L; i += period) 
  {
    digitalWrite(SsRob_Port::pin1(), HIGH);
    delayMicroseconds(pulse);
    digitalWrite(SsRob_Port::pin1(), LOW);
    delayMicroseconds(pulse);
  }
}