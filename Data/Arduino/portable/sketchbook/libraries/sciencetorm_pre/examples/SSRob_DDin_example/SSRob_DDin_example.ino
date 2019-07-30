#include "SSRob_DDin.h"

SSRob_DDDDin ddin(PORT2, PORT9);

void setup() {
  Serial.begin(9600);
  Serial.println("System On");
}

void loop() {
  Serial.print("A = ");
  Serial.print(ddin.read(LINE_A));
  Serial.print("  ");
  Serial.print("B = ");
  Serial.println(ddin.read(LINE_B));
  delay(100);
}
