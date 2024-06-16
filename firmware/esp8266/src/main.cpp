#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "config.h"
#include "mqtt_handler.h"
#include "sensor_handler.h"

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

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

  // Handle any other device-specific tasks
  // ...

  delay(1000);
}