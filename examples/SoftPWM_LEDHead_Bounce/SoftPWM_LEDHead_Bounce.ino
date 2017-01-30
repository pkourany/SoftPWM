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
  int i;

  for (i = 0; i < 7; i++)
  {
    SoftPWMSet(leds[i+1], 255);
    SoftPWMSet(leds[i], 0);
    delay(DELAY);
  }
  
  delay(400);
  
  for (i = 7; i > 0; i--)
  {
    SoftPWMSet(leds[i-1], 255);
    SoftPWMSet(leds[i], 0);
    delay(DELAY);
  }

  delay(400);

}
