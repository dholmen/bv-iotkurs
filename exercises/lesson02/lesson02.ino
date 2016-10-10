// Oppgave: Installer "DHT sensor library by Adafruit"
#include <DHT.h>

#define DHT_PIN D1
#define DHT_TYPE DHT11

// Oppgave: Deklarer og sett opp DHT-sensor med riktig GPIO pin og type (timing: 11)

float humidity, temp;

void setup() {
  Serial.begin(115200);

  // Oppgave: Initialiser DHT-sensor
}

void loop() {
  // Oppgave: Les av fuktighet

  // Oppgave: Les av temperatur
  
  if (isnan(humidity) || isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");

  // Oppgave: Skriv ut temperatur til serieport

  Serial.print("Humidity: ");

  // Oppgave: Skriv ut fuktighet til serieport

  delay(2000);
}

