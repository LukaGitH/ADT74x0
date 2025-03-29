#include "ADT74x0.h"
#include <Wire.h>
ADT74x0 adt;
#define BAUD_RATE 115200

void setup(void)
{
  Serial.begin(BAUD_RATE);
  Wire.begin();
  adt.begin();
}

void loop(void)
{
  Serial.println(adt.readTemperature());
  delay(100);
}
