#include "SoftPWM.h"

#define LED D7


void setup()
{
  SoftPWMBegin();
  
  SoftPWMSet(LED, 0);

  SoftPWMSetFadeTime(LED, 1000, 1000);
}

void loop()
{
  SoftPWMSet(LED, 255);
  delay(1000);
  SoftPWMSet(LED, 0);
  delay(1000);
}
