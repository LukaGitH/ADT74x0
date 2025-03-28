#include "ADT74x0.h"
ADT74x0 adt;
#define BAUD_RATE 115200

void setup(void)
{
  Serial.begin(BAUD_RATE);
  adt.begin();
}

void loop(void)
{
  Serial.println(adt.readTemperature());
  delay(100);
}
