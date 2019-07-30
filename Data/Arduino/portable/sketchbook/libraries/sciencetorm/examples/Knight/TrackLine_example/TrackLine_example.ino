
#include "SsRob_IO_Knight.h"

SsRob_DcMotor motor1(M1);
SsRob_DcMotor motor2(M2);
SsRob_Port line(P1);

void setup() {
  motor1.setSpeed(255);
  motor2.setSpeed(255);
}

void loop() {
  if(line.dRead1() == HIGH && line.dRead2() == HIGH)
  {
      motor1.setSpeed(-150);
      motor2.setSpeed(-150);
   }
   else if(line.dRead1() == LOW && line.dRead2() == HIGH)
  {
      motor1.setSpeed(100);
      motor2.setSpeed(20);
   }
   else if(line.dRead1() == HIGH && line.dRead2() == LOW)
  {
      motor1.setSpeed(20);
      motor2.setSpeed(100);
   }
   else if(line.dRead1() == LOW && line.dRead2() == LOW)
  {
      motor1.setSpeed(200);
      motor2.setSpeed(200);
   }
}

