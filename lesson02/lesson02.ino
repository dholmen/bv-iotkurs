#include <DHT.h>

#define DHT_PIN D1
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE, 11);

float humidity, temp;

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  humidity = dht.readHumidity();
  temp = dht.readTemperature();
  if (isnan(humidity) || isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.println(temp);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  delay(2000);
}

