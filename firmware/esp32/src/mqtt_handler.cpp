#include <WiFi.h> // Include the WiFi library for ESP32
#include <PubSubClient.h>
#include "mqtt_handler.h"

WiFiClient espClient;
PubSubClient mqttClient(espClient);

void initMQTT() {
  mqttClient.setServer(MQTT_SERVER, MQTT_PORT);
  mqttClient.setCallback(mqttCallback);
}

void reconnectMQTT() {
  while (!mqttClient.connected()) {
    Serial.println("Connecting to MQTT...");
    if (mqttClient.connect(MQTT_CLIENT_ID, MQTT_USERNAME, MQTT_PASSWORD)) {
      Serial.println("Connected to MQTT");
      subscribeToTopic(MQTT_TOPIC_CONTROL);
    } else {
      Serial.print("Failed to connect to MQTT, rc=");
      Serial.print(mqttClient.state());
      Serial.println(" Retrying in 5 seconds...");
      delay(5000);
    }
  }
}

void mqttCallback(char* topic, byte* payload, unsigned int length) {
  // Handle incoming MQTT messages
  // ...
}

void publishMessage(const char* topic, const char* message) {
  mqttClient.publish(topic, message);
}

void subscribeToTopic(const char* topic) {
  mqttClient.subscribe(topic);
}
