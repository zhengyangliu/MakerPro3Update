#include "SSRob_DDout.h"

SSRob_DDout ddout(PORT4);

void setup() {
}

void loop() {
  ddout.write(LINE_A, HIGH);
  ddout.write(LINE_B, LOW);
  delay(500);
  ddout.write(LINE_A, LOW);
  ddout.write(LINE_B, HIGH);
  delay(500);
}
