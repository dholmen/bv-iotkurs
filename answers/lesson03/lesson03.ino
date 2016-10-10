
#define LED_PIN D2

void setup() {
  // Sett LED pin i output-modus
  pinMode(LED_PIN, OUTPUT);

  // Sett LED pin lav (skru av)
  digitalWrite(LED_PIN, LOW);
}

void loop() {

  // Toggle lav/høy på LED pin uten å bruke noen statusvariabler
  if (digitalRead(LED_PIN) == HIGH) {
    digitalWrite(LED_PIN, LOW);
  } else {
    digitalWrite(LED_PIN, HIGH);
  }

  // Vent 0.5 sekund
  delay(500);
}

