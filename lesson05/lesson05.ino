#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid     = "bouvet-iot";
const char* password = "esp8266kurs";

//const char* mqtt_broker = "din.mqtt-server-url.her";
const byte mqtt_broker[] = {192, 168, 1, 200};
const int mqtt_port = 1883;

WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);

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

  randomSeed(micros());

  mqttClient.setServer(mqtt_broker, mqtt_port);
}

void reconnect() {
  while (!mqttClient.connected()) {
    Serial.print("Attempting MQTT connection...");
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);

    if (mqttClient.connect(clientId.c_str())) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(mqttClient.state());
      Serial.println(" retrying in 5 seconds");
      delay(5000);
    }
  }
}



void loop() {
  if (!mqttClient.connected()) {
    reconnect();
  }
  
  mqttClient.publish("random/topic", "hello world");

  delay(5000);
}

