#include "mqtt_handler.h"
#include <ESP8266WiFi.h>

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
  // Convert the payload to a string
  String message;
  for (unsigned int i = 0; i < length; i++) {
    message += (char)payload[i];
  }

  Serial.print("Received message on topic: ");
  Serial.println(topic);
  Serial.print("Message: ");
  Serial.println(message);

  // Handle incoming MQTT messages based on the topic
  if (strcmp(topic, MQTT_TOPIC_CONTROL) == 0) {
    // Control message received
    if (message == "ON") {
      // Turn on the device
      digitalWrite(LED_PIN, HIGH);
      publishMessage(MQTT_TOPIC_STATUS, "LED turned on");
    } else if (message == "OFF") {
      // Turn off the device
      digitalWrite(LED_PIN, LOW);
       publishMessage(MQTT_TOPIC_STATUS, "LED turned off");
    }
  }
}

void publishMessage(const char* topic, const char* message) {
  mqttClient.publish(topic, message);
}

void subscribeToTopic(const char* topic) {
  mqttClient.subscribe(topic);
}