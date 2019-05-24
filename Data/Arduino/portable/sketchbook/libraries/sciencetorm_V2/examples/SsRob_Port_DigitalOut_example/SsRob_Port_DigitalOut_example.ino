#include "io_GP_V1.h"

SsRob_Port dout(P3);

void setup() {
  
}

void loop() {
  dout.dWrite1(HIGH);
  delay(500);
  dout.dWrite1(LOW);
  delay(500);
}
