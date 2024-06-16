# CSHAS Device Firmware

The CSHAS Device Firmware is the software component that runs on the IoT devices (ESP8266/ESP32) in the Customizable Smart Home Automation System. It enables communication between the devices and the backend server using MQTT protocol.

## Key Features

- Wi-Fi connectivity and MQTT communication
- Sensor data collection and transmission
- Actuator control and status reporting
- Over-the-air (OTA) firmware updates
- Low-power operation and power management

## Supported Devices

The firmware supports the following devices:

- ESP8266-based boards (e.g., NodeMCU, Wemos D1 Mini)
- ESP32-based boards (e.g., ESP32-DevKitC, ESP32-WROOM-32)

## Getting Started

To get started with the CSHAS Device Firmware, follow these steps:

1. **Hardware Setup**:
   - Connect the sensors and actuators to the appropriate pins on the ESP8266/ESP32 board.
   - Refer to the schematic diagrams in the `schematics/` directory for the recommended wiring connections.

2. **Development Environment**:
   - Install the Arduino IDE or PlatformIO IDE on your computer.
   - Set up the development environment for ESP8266/ESP32 by installing the necessary board support packages and libraries.

3. **Firmware Configuration**:
   - Open the firmware source code in the Arduino IDE or PlatformIO IDE.
   - Modify the configuration file (`config.h`) to set the Wi-Fi credentials, MQTT broker settings, and device-specific parameters.

4. **Flashing the Firmware**:
   - Connect the ESP8266/ESP32 board to your computer using a USB cable.
   - Select the appropriate board and port in the Arduino IDE or PlatformIO IDE.
   - Compile and upload the firmware to the device.

5. **Testing and Verification**:
   - Open the serial monitor to view the device's output and check for any error messages.
   - Verify that the device connects to the Wi-Fi network and establishes a connection with the MQTT broker.
   - Test the sensor data collection and actuator control functionalities to ensure proper operation.

For detailed instructions and troubleshooting tips, please refer to the documentation in the `documentation/` directory.

## Firmware Architecture

The CSHAS Device Firmware follows a modular architecture to ensure code organization, maintainability, and extensibility. The main components of the firmware include:

- **Main Loop**: Handles the overall flow of the firmware, including initialization, Wi-Fi and MQTT connection management, and periodic tasks.
- **Wi-Fi Manager**: Manages the Wi-Fi connection, including connecting to the configured network, handling disconnections, and reconnecting when necessary.
- **MQTT Client**: Handles the MQTT communication with the backend server, including publishing sensor data, subscribing to control topics, and processing incoming messages.
- **Sensor Handlers**: Implement the logic for reading data from connected sensors and preparing it for transmission.
- **Actuator Handlers**: Implement the logic for controlling connected actuators based on received commands and reporting their status.
- **OTA Update Manager**: Handles the over-the-air firmware update process, allowing seamless firmware upgrades without physical access to the device.
- **Configuration Manager**: Manages the device-specific configuration parameters, such as Wi-Fi credentials, MQTT settings, and pin assignments.

For a more detailed overview of the firmware architecture and its components, please refer to the `firmware_architecture.md` file in the `documentation/` directory.

## Contributing

Contributions to the CSHAS Device Firmware are welcome! If you encounter any issues, have suggestions for improvements, or would like to add new features, please follow the guidelines below:

1. Fork the repository and create a new branch for your contribution.
2. Make your changes, ensuring that the code adheres to the project's coding conventions and style guide.
3. Test your changes thoroughly to ensure they do not introduce new bugs or regressions.
4. Submit a pull request, clearly describing the changes you have made and their purpose.

For more information on contributing to the project, please refer to the `CONTRIBUTING.md` file.

## License

The CSHAS Device Firmware is released under the [GNU AFFERO GENERAL PUBLIC LICENSE](LICENSE). You are free to use, modify, and distribute the firmware in accordance with the terms and conditions of the license.

## Contact

If you have any questions, suggestions, or issues related to the CSHAS Device Firmware, please contact the project maintainers at [dev@cshas.com](mailto:dev@cshas.com) or open an issue on the GitHub repository.

We appreciate your interest and contributions to the Customizable Smart Home Automation System!