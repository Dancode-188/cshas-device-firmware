#include "sensor_handler.h"
#include "mqtt_handler.h"
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 4  // Replace with the actual pin number connected to the DHT22 sensor
#define DHTTYPE DHT22

// Create an instance of the DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Define sensorDataPayload
char sensorDataPayload[256];

void initSensors() {
  // Initialize the DHT sensor
  dht.begin();
}

void readSensors() {
  // Read temperature and humidity from the DHT22 sensor
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check if the reading was successful
  if (isnan(temperature) || isnan(humidity)) {
    // If the reading failed, set a default message
    snprintf(sensorDataPayload, sizeof(sensorDataPayload), "Failed to read from DHT sensor");
  } else {
    // If the reading was successful, format the sensor data as a string
    snprintf(sensorDataPayload, sizeof(sensorDataPayload), "Temperature: %.2f °C, Humidity: %.2f %%", temperature, humidity);
  }
}

void sendSensorData() {
  // Publish sensor data via MQTT
  publishMessage(MQTT_TOPIC_DATA, sensorDataPayload);
}