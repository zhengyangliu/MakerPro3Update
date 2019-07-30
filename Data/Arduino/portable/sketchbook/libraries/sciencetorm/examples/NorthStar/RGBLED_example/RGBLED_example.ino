
#include "SsRob_IO_NorthStar.h"

SsRob_RGBLED rgb_led(P3);

#define ADD true
#define SUB false

#define RED    0
#define GREEN  1
#define BULE   2

uint8_t val = 0;
uint8_t color = 0;
bool stat = ADD;

void setup() {

}

void loop() {
  if (val >= 255)
    stat = SUB;
  else if (val <= 0)
  {
    stat = ADD;
    color++;
    if (color == 3)
      color = 0;
  }

  if (color == RED)
    rgb_led.setcolor(val, 0, 0);
  else if (color == GREEN)
    rgb_led.setcolor(0, val, 0);
  else
    rgb_led.setcolor(0, 0, val);

  delay(5);

  if (stat == SUB)
    val --;
  else if (stat == ADD)
    val++;
}

