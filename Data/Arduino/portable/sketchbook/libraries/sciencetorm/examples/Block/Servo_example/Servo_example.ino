#include "SsRob_IO_Block.h"

SsRob_Servo servo(S1);

void setup() {
  servo.init();
}

void loop() { 
  servo.write(0);
  delay(1500);
  servo.write(180);
  delay(1500);
}
