#ifndef MQTT_HANDLER_H
#define MQTT_HANDLER_H

#include <PubSubClient.h>
#include "config.h"

extern PubSubClient mqttClient;

void initMQTT();
void reconnectMQTT();
void mqttCallback(char* topic, byte* payload, unsigned int length);
void publishMessage(const char* topic, const char* message);
void subscribeToTopic(const char* topic);

#endif