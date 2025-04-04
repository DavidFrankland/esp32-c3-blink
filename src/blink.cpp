#include <Arduino.h>

#define LED_BUILTIN 8

void setup()
{
  // Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Serial.println("Flash");
  digitalWrite(LED_BUILTIN, HIGH); // LED is OFF
  delay(900);
  digitalWrite(LED_BUILTIN, LOW); // LED is ON
  delay(100);
}
