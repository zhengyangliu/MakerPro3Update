#include "io_GP_V1.h"

SsRob_Port din(P3);

void setup() {
  Serial.begin(9600);
  Serial.println("System On");
}

void loop() {
  Serial.print("Digital in state is : ");
  if (din.dRead1() == IDLE)
    Serial.println("idle");
  else
    Serial.println("triggered");
  delay(100);
}
