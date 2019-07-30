#include <SSRob_Ultrasonic.h>

SSRob_Ultrasonic ultrasonic(PORT2);

void setup() {
  Serial.begin(9600);
  Serial.println("System ON");
}

long l;

void loop() {
  l = ultrasonic.distanceCm();
  
  Serial.print("distance = ");
  Serial.print(l);
  Serial.println("cm");
  
  delay(200);
}
