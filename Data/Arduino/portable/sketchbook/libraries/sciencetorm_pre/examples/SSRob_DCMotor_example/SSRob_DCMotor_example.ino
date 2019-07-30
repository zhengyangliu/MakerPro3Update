#include "SSRob_DCMotor.h"

SSRob_DCMotor motor1(PORT0);

void setup() {

}

void loop() {
  motor1.run(-255);
  delay(1000);
  motor1.run(-100);
  delay(1000);
  motor1.run(100);
  delay(1000);
  motor1.run(255);
  delay(1000);
}
