#include "sensor_handler.h"
#include "mqtt_handler.h"

// Define sensorDataPayload
char sensorDataPayload[256];

void initSensors() {
  // Initialize sensors and actuators
  // ...
}

void readSensors() {
  // Read sensor data and fill sensorDataPayload
  snprintf(sensorDataPayload, sizeof(sensorDataPayload), "Sensor data"); // Example sensor data
}

void sendSensorData() {
  // Publish sensor data via MQTT
  publishMessage(MQTT_TOPIC_DATA, sensorDataPayload);
}
