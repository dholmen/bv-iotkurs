
#define LED_PIN D2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  if (digitalRead(LED_PIN) == HIGH) {
    digitalWrite(LED_PIN, LOW);
  } else {
    digitalWrite(LED_PIN, HIGH);
  }
  delay(500);
}

