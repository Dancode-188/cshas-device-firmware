# ESP32 Firmware

This directory contains the firmware code for ESP32-based devices in the Customizable Smart Home Automation System (CSHAS).

## Prerequisites

- PlatformIO: Make sure you have PlatformIO installed in your development environment.
- ESP32 board: Ensure you have an ESP32-based board connected to your computer.

## Getting Started

1. Clone the repository and navigate to the `esp32/` directory.
2. Update the configuration in `config.h` with your Wi-Fi and MQTT settings.
3. Open the project in PlatformIO.
4. Build and upload the firmware to your ESP32 board.
5. Monitor the serial output for debugging and verification.

## Firmware Structure

- `main.cpp`: The main entry point of the firmware, handling Wi-Fi and MQTT connectivity, and device-specific tasks.
- `config.h`: Configuration file for Wi-Fi, MQTT, and device-specific settings.
- `mqtt_handler.h` and `mqtt_handler.cpp`: MQTT communication handling, including connection management, publishing, and subscribing.
- `sensor_handler.h` and `sensor_handler.cpp`: Sensor data handling, including sensor initialization, reading, and sending data via MQTT.

## Functionality

The ESP32 firmware provides the following functionality:

- Wi-Fi connectivity: The firmware connects to the configured Wi-Fi network to establish a connection with the MQTT broker.
- MQTT communication: The firmware establishes a connection with the MQTT broker, subscribes to the control topic, and publishes sensor data and device status to the specified topics.
- DHT22 sensor integration: The firmware reads temperature and humidity data from a connected DHT22 sensor and sends the data via MQTT.
- LED control: The firmware can control an LED connected to the ESP32 board based on the received MQTT control messages.
- Device status reporting: The firmware publishes the device connection status and LED state updates to the MQTT status topic.

## Customization

- Modify the `config.h` file to adjust the Wi-Fi and MQTT settings according to your setup.
- Customize the MQTT topics and payloads in `config.h` to match your backend requirements.
- Implement additional device-specific functionality in `sensor_handler.cpp` and `main.cpp`, such as reading values from other sensors or controlling different actuators.

## Troubleshooting

If you encounter any issues while building or uploading the firmware, please refer to the PlatformIO documentation and ESP32 board-specific troubleshooting guides.

For general questions or support, please contact the CSHAS development team.

## Contributing

If you would like to contribute to the ESP32 firmware development, please follow these steps:

1. Fork the repository and create a new branch for your feature or bug fix.
2. Make your changes and test thoroughly.
3. Submit a pull request describing your changes and their benefits.

We appreciate your contributions to make the ESP32 firmware more robust and feature-rich!

## License

This firmware is released under the [MIT License](LICENSE).