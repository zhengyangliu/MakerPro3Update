#include "SSRob_Servo.h"

SSRob_Servo ser(PORT2);

void setup() {
  ser.init();
}

void loop() {
  ser.write(90);
  delay(500);
  ser.write(180);
  delay(500);
}
