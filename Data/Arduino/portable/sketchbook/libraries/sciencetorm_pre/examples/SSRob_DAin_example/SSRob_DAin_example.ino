#include "SSRob_DAin.h"

SSRob_DAin dain(PORT4);

void setup() {
  Serial.begin(9600);
  Serial.println("System On");
}

void loop() {
  Serial.print("Digital = ");
  Serial.print(dain.read(LINE_A));
  Serial.print("  ");
  Serial.print("Analog = ");
  Serial.println(dain.read(LINE_B));
  delay(100);
}

