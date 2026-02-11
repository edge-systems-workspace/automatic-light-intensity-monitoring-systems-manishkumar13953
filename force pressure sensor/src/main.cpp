#include <Arduino.h>
int value=0;

void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
// write your initialization code here
}

void loop() {
    value=analogRead(A0);
    Serial.println(value);
    delay(500);
// write your code herebg
}