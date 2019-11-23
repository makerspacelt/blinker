#include <Arduino.h>

#define BEEP_PIN 4
#define TURN_PIN 6
#define GND_PIN 10

#define ON_TIME 500
#define OFF_TIME 500

void setup() {
  pinMode(BEEP_PIN, OUTPUT);
  pinMode(GND_PIN, OUTPUT);
  pinMode(TURN_PIN, INPUT);
}

void loop() {
  delay(10);
  if (digitalRead(TURN_PIN) == HIGH) {
    digitalWrite(BEEP_PIN, HIGH);
  } else {
    digitalWrite(BEEP_PIN, LOW);
  }
}
