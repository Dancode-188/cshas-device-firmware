# Firmware Architecture

The firmware for the Customizable Smart Home Automation System (CSHAS) follows a modular architecture to ensure flexibility, maintainability, and extensibility. The key components of the firmware architecture are:

1. **Main Loop**: The main loop is responsible for orchestrating the overall flow of the firmware. It initializes the necessary components, handles the Wi-Fi and MQTT connections, and continuously processes incoming data and commands.

2. **Wi-Fi Manager**: The Wi-Fi manager module handles the Wi-Fi connection and configuration. It allows the device to connect to the specified Wi-Fi network and manages reconnection attempts in case of connection loss.

3. **MQTT Client**: The MQTT client module is responsible for establishing and maintaining the connection to the MQTT broker. It subscribes to the necessary topics, publishes device data and status updates, and handles incoming MQTT messages.

4. **Sensor Manager**: The sensor manager module interacts with the connected sensors, such as DHT11 temperature and humidity sensor and PIR motion sensor. It reads sensor data at regular intervals and preprocesses the data before sending it to the MQTT broker.

5. **Actuator Manager**: The actuator manager module controls the connected actuators, such as relays and LEDs. It receives commands from the MQTT broker and translates them into appropriate actions to control the actuators.

6. **Configuration Manager**: The configuration manager module handles the device-specific configuration, such as Wi-Fi credentials, MQTT broker settings, and pin assignments. It allows for easy modification and customization of the firmware behavior.

7. **Utility Functions**: The firmware includes various utility functions for tasks like data parsing, formatting, and error handling. These functions are used across different modules to ensure code reusability and maintainability.

The firmware architecture is designed to be modular and event-driven. Each component operates independently and communicates with others through well-defined interfaces. This modular approach allows for easy integration of new features, sensors, and actuators in the future.

The firmware leverages the Arduino framework and the ESP8266/ESP32 libraries to interact with the hardware and perform low-level operations. It utilizes popular libraries like PubSubClient for MQTT communication and ArduinoJson for JSON parsing and serialization.

By following this modular architecture and leveraging existing libraries, the firmware aims to provide a robust and efficient foundation for building smart home automation systems using ESP8266 and ESP32 devices.