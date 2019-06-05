

#include "SsRob_Ultrasonic.h"

SsRob_Ultrasonic::SsRob_Ultrasonic(void) : SsRob_Port(0)
{

}

SsRob_Ultrasonic::SsRob_Ultrasonic(uint8_t port) : SsRob_Port(port)
{

}

long SsRob_Ultrasonic::measure(void)
{
    long duration;
    if (millis() - _lastEnterTime > 23)
    {
        _lastEnterTime = millis();

        pinMode(SsRob_Port::pin1(), OUTPUT);
        digitalWrite(SsRob_Port::pin1(), LOW);
        delayMicroseconds(2);
        digitalWrite(SsRob_Port::pin1(), HIGH);
        delayMicroseconds(10);
        digitalWrite(SsRob_Port::pin1(), LOW);

        pinMode(SsRob_Port::pin1(), INPUT);

        duration = pulseIn(SsRob_Port::pin1(), HIGH, MEASURE_TIMEOUT);
        _measureValue = duration;
    }
    else
    {
        duration = _measureValue;
    }
    return (duration);
}

double SsRob_Ultrasonic::distanceCm(void)
{
  long distance = measure();

  if(distance == 0)
  {
    distance = MAXCM * 58;
  }

  return( (double)distance / 58.0);
}