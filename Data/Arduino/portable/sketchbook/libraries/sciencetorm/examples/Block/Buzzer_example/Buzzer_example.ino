#include "SsRob_IO_Block.h"

SsRob_Buzzer buzzer(P3);

void setup() {

}

void loop() { 
  buzzer.tone(262, 1000);
  delay(1000);
}
