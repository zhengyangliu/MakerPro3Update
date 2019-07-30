#include "SsRob_IO_NorthStar.h"

SsRob_OLED oled;

void setup() {
  oled.begin();
}

void loop() {
  oled.show("Distance", 400, "cm");
  delay(1000);
}
