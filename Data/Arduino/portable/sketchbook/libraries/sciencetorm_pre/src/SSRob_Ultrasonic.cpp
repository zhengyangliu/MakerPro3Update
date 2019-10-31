
#include "SSRob_Ultrasonic.h"

#define MEASURE_TIMEOUT 40000 // 0.04s
#define MAXCM 500             // 5m

long SSRob_Ultrasonic::measure(void)
{
  long duration;
  if (millis() - _lastEnterTime > 23)
  {
    _measureFlag = true;
  }

  if (_measureFlag == true)
  {
    _lastEnterTime = millis();
    _measureFlag = false;

    pinMode(port.PortA, OUTPUT);
    digitalWrite(port.PortA, LOW);
    delayMicroseconds(2);
    digitalWrite(port.PortA, HIGH);
    delayMicroseconds(10);
    digitalWrite(port.PortA, LOW);

    pinMode(port.PortA, INPUT);

    duration = pulseIn(port.PortA, HIGH, MEASURE_TIMEOUT);
    _measureValue = duration;
  }
  else
  {
    duration = _measureValue;
  }
  return (duration);
}

double SSRob_Ultrasonic::distanceCm(void)
{
  long distance = measure();

  if (distance == 0)
  {
    distance = MAXCM * 58;
  }

  return ((double)distance / 58.0);
}
