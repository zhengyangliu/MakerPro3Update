#ifndef __SSROB_ULTRASONIC_H
#define __SSROB_ULTRASONIC_H

#include "SsRob_Port.h"

#define MEASURE_TIMEOUT 40000      // 0.04s
#define MAXCM           500        // 5m

class SsRob_Ultrasonic : public SsRob_Port
{
public:
    SsRob_Ultrasonic(void);
    SsRob_Ultrasonic(uint8_t port);

    double distanceCm(void);

private:
    long measure(void);
    
    long _lastEnterTime;
    long _measureValue;
};

#endif