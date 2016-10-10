#include <ESP8266WiFi.h>

const char* ssid     = "bouvet-iot";
const char* password = "esp8266kurs";

void setup() {
  Serial.begin(115200);

  Serial.println("");
  Serial.print("Connecting to: ");
  Serial.println(ssid);

  // Oppgave: Start tilkobling til trådløst nettverk med ssid og password

  // Oppgave: Skriv ut "." hvert 0.5 sekund fram til vi er tilkoblet

  Serial.println("Connected!");  
  Serial.println("IP address: ");
  
  // Oppgave: Skriv ut IP-adresse
}

void loop() {
}

