//
// Created by CryosArtic on 10/9/2026.
//

#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
    pinMode(33, OUTPUT);
}

void loop() {
    digitalWrite(33, HIGH);
    delay(100);
    digitalWrite(33, LOW);
    delay(100);
    Serial.println("Working!");
}