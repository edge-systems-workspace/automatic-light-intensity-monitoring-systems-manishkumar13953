#include <DHT.h>
#include <Adafruit_Sensor.h>

#define DHTPIN 2        // Digital pin connected to DHT11
#define DHTTYPE DHT11  // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    Serial.begin(9600);
    Serial.println("DHT11 Sensor Test");
    dht.begin();
}

void loop() {
    delay(2000);

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
    }

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
}