#include "sensor_handler.h"
#include "mqtt_handler.h"
#include <ArduinoJson.h>  // Include necessary library

StaticJsonDocument<200> sensorDataPayload;  // Define the variable

void initSensors() {
  // Initialize sensors and actuators
  // ...
}

void readSensors() {
  // Read sensor data
  // ...
}

void sendSensorData() {
  // Prepare sensor data payload
  sensorDataPayload["temperature"] = 25; // Example data
  sensorDataPayload["humidity"] = 50;    // Example data

  char buffer[256];
  serializeJson(sensorDataPayload, buffer);

  // Publish sensor data via MQTT
  publishMessage(MQTT_TOPIC_DATA, buffer);
}
