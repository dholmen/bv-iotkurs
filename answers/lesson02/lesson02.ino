#include <DHT.h>

#define DHT_PIN D1
#define DHT_TYPE DHT11

// Deklarer og sett opp DHT-sensor med riktig GPIO pin og type (cycle count: 11)
DHT dht(DHT_PIN, DHT_TYPE, 11);

float humidity, temp;

void setup() {
  Serial.begin(115200);

  // Initialiser DHT-sensor
  dht.begin();
}

void loop() {
  // Les av fuktighet
  humidity = dht.readHumidity();

  // Les av temperatur
  temp = dht.readTemperature();
  
  if (isnan(humidity) || isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");

  // Skriv ut temperatur til serieport
  Serial.println(temp);

  Serial.print("Humidity: ");

  // Skriv ut fuktighet til serieport
  Serial.println(humidity);

  delay(2000);
}

