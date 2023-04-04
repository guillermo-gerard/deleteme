#include <Arduino.h>
const int PIN_LED = D0;
const int PIN_BUTTON_FAST = D1;
const int PIN_BUTTON_SLOW = D2;

const unsigned int WAIT_TIME_DELTA = 10;

unsigned int waitTime = 2000;
unsigned int waitTimeButton = 200;
unsigned long waitingTimeStart;
unsigned long waitingTimeButtonStart;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON_FAST, INPUT);
  pinMode(PIN_BUTTON_SLOW, INPUT);
  waitingTimeStart = millis();
}

void loop()
{
  if (millis() - waitingTimeButtonStart >= waitTimeButton && digitalRead(PIN_BUTTON_FAST))
  {
    waitTime = waitTime - WAIT_TIME_DELTA;
    waitingTimeButtonStart = millis();
  }

  if (millis() - waitingTimeStart >= waitTime)
  {
    digitalWrite(PIN_LED, !digitalRead(PIN_LED));
    waitingTimeStart = millis();
  }
}