#include "SoftPWM.h"

uint8_t leds[8] = {D0, D1, D2, D3, D4, D5, D6, D7};


#define DELAY 100

void setup()
{
  SoftPWMBegin();
  for (int i = 0; i < 8; i++)
    SoftPWMSet(leds[i], 0);

  SoftPWMSetFadeTime(ALL, 50, 400);
}

void loop()
{
  uint8_t pin = random(8);
  
  SoftPWMSet(leds[pin], 255);
  delay(50);
  SoftPWMSet(leds[pin], 0);

  delay(random(DELAY));
}
