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

## Customization

- Modify the `config.h` file to adjust the Wi-Fi and MQTT settings according to your setup.
- Implement device-specific functionality in `sensor_handler.cpp` and `main.cpp`, such as reading sensor values and controlling actuators.
- Customize the MQTT topics and payloads to match your backend requirements.

## Troubleshooting

If you encounter any issues while building or uploading the firmware, please refer to the PlatformIO documentation and ESP32 board-specific troubleshooting guides.

For general questions or support, please contact the CSHAS development team.