#include "io_GP_V1.h"

SsRob_Port dout(P3);

void setup() {
}

void loop() {
  Serial.print("Analog in is : ");
  Serial.println(ain.aRead2());
  delay(100);
}
