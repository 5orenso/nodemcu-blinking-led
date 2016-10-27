#include <Arduino.h>

#define PIN_1 D5

void setup() {
    Serial.begin(115200);
    pinMode(PIN_1, OUTPUT);
}

void loop() {
    Serial.println("mode: ON");
    digitalWrite(PIN_1, HIGH);
    delay(1000);
    Serial.println("mode: OFF");
    digitalWrite(PIN_1, LOW);
    delay(1000);
}
