# Device Setup

This guide provides instructions for setting up and flashing the firmware on ESP8266 and ESP32 devices for the Customizable Smart Home Automation System (CSHAS).

## Prerequisites

Before you begin, ensure you have the following:
- ESP8266 or ESP32 development board
- USB cable for programming the device
- Computer with the Arduino IDE installed
- Required libraries installed (e.g., PubSubClient, ArduinoJson)

## Flashing the Firmware

1. **Connect the Device**: Connect your ESP8266 or ESP32 device to your computer using a USB cable.

2. **Open the Firmware Code**: Open the firmware code for your device (`esp8266/src/main.cpp` or `esp32/src/main.cpp`) in the Arduino IDE.

3. **Configure the Firmware**: Modify the configuration values in the `config.h` file according to your setup. Update the Wi-Fi credentials, MQTT broker settings, and any device-specific configurations.

4. **Select the Board**: In the Arduino IDE, go to "Tools" > "Board" and select the appropriate board for your device (e.g., "NodeMCU 1.0 (ESP-12E Module)" for ESP8266 or "ESP32 Dev Module" for ESP32).

5. **Select the Port**: Go to "Tools" > "Port" and select the serial port to which your device is connected.

6. **Upload the Firmware**: Click on the "Upload" button in the Arduino IDE to compile and upload the firmware to your device. Wait for the upload process to complete.

7. **Monitor the Output**: Open the Serial Monitor in the Arduino IDE to view the output and any debugging messages from the device. Ensure the baud rate is set to 115200.

## Troubleshooting

If you encounter any issues during the firmware upload or device setup, refer to the `troubleshooting.md` document for common problems and their solutions.

## Next Steps

Once the firmware is successfully uploaded and running on your device, you can proceed with integrating it into your smart home automation system. Refer to the `firmware_architecture.md` document for an overview of the firmware components and their interactions.

For further customization and advanced usage, consult the source code and the comments provided within the firmware files.

If you have any questions or need assistance, please reach out to the CSHAS development team or the community forums for support.