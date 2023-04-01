#include <Arduino.h>
const int PIN_LED = D0;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  // put your setup code here, to run once:
}

void loop()
{
  digitalWrite(PIN_LED, HIGH);
  delay(500);
  digitalWrite(PIN_LED, LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}