#include "SsRob_IO_NorthStar.h"

SsRob_Ultrasonic ultrasonic(P3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("distance = ");
  Serial.println(ultrasonic.distanceCm());
    
  delay(200);
}
