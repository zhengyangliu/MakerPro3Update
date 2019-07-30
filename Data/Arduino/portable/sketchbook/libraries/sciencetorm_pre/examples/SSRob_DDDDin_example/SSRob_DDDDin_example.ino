#include "SSRob_DDDDin.h"

SSRob_DDDDin ddddin(PORT2, PORT9);

void setup() {
  Serial.begin(9600);
  Serial.println("System On");
}

void loop() {
  Serial.print("A = ");
  Serial.print(ddddin.read(LINE_A));
  Serial.print("  ");
  Serial.print("B = ");
  Serial.print(ddddin.read(LINE_B));
  Serial.print("C = ");
  Serial.print(ddddin.read(LINE_C));
  Serial.print("  ");
  Serial.print("D = ");
  Serial.println(ddddin.read(LINE_D));
  delay(100);
}
