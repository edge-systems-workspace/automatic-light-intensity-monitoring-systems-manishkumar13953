#include <Arduino.h>
#define LDR_Pin A0
void setup() {
    Serial.begin(9600);
    pinMode(LDR_Pin, INPUT);
    Serial.println("LDR Test");//Important for Uno R4 WiFi

}

void loop() {
    int ldrRaw = analogRead(LDR_Pin);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(500);

}