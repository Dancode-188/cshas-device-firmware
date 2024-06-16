#ifndef SENSOR_HANDLER_H
#define SENSOR_HANDLER_H

#include <ArduinoJson.h>  // Add necessary includes

extern StaticJsonDocument<200> sensorDataPayload;  // Declare the external variable

void initSensors();
void readSensors();
void sendSensorData();

#endif  // SENSOR_HANDLER_H
