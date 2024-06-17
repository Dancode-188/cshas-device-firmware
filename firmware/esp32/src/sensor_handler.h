#ifndef SENSOR_HANDLER_H
#define SENSOR_HANDLER_H

#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 4  // Replace with the actual pin number connected to the DHT22 sensor
#define DHTTYPE DHT22

extern DHT dht;
extern char sensorDataPayload[256];

void initSensors();
void readSensors();
void sendSensorData();

#endif