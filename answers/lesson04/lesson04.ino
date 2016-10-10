#include <ESP8266WiFi.h>

const char* ssid     = "bouvet-iot";
const char* password = "esp8266kurs";

void setup() {
  Serial.begin(115200);

  Serial.println("");
  Serial.print("Connecting to: ");
  Serial.println(ssid);

  // Start tilkobling til trådløst nettverk med ssid og password
  WiFi.begin(ssid, password);

  // Skriv ut "." hvert 0.5 sekund fram til vi er tilkoblet
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Connected!");  
  Serial.println("IP address: ");
  
  // Skriv ut IP-adresse
  Serial.println(WiFi.localIP());
}

void loop() {
}

