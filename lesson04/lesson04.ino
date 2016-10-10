#include <ESP8266WiFi.h>

const char* ssid     = "bouvet-iot";
const char* password = "esp8266kurs";

void setup() {
  Serial.begin(115200);

  Serial.println("");
  Serial.print("Connecting to: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Connected!");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}

