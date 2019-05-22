#include "io_GP_V1.h"

SsRob_OLED oled;

void setup() {
  oled.begin();
}

void loop() {
  oled.show("Distance", 400, "cm");
  delay(1000);
}
