#include "SsRob_IO_Block.h"

SsRob_Port port(P1);
SsRob_RunButton button;

void setup() {
  button.wait();
}

void loop() {
  port.dWrite1(HIGH);
  delay(1000);
  port.dWrite1(LOW);
  delay(1000);
}
