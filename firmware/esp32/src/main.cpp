#include <Arduino.h>
#include <WiFi.h>
#include "config.h"
#include "mqtt_handler.h"
#include "sensor_handler.h"

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);

  // Connect to Wi-Fi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialize MQTT connection
  initMQTT();

  // Initialize sensors and actuators
  initSensors();

  // Publish a message to indicate that the device is connected and ready
  publishMessage(MQTT_TOPIC_STATUS, "Device connected");
}

void loop() {
  // Maintain MQTT connection
  if (!mqttClient.connected()) {
    reconnectMQTT();
  }
  mqttClient.loop();

  // Read sensor data and send it via MQTT
  readSensors();
  sendSensorData();

  // Add any other device-specific tasks or logic here
  // ...

  delay(1000);
}