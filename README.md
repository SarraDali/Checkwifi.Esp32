# Arduino MQTT Publisher

This Arduino project demonstrates how to connect an Arduino to a Wi-Fi network, connect to an MQTT server, generate a random value, and publish it to a specified MQTT topic. It’s useful for IoT applications where sensor data or status updates need to be sent to a server over MQTT.

## Features

- **Wi-Fi Connectivity**: Connects the Arduino to a specified Wi-Fi network.
- **MQTT Communication**: Connects to an MQTT server, allowing the Arduino to publish messages to a topic.
- **Random Value Generation**: Generates a random integer and posts it to the MQTT topic.

## Requirements

- **Arduino Board**: ESP8266, ESP32, or another Arduino-compatible board with Wi-Fi capability.
- **Libraries**:
  - **PubSubClient**: For MQTT communication.
  - **WiFi**: For Wi-Fi connectivity (built-in on ESP8266/ESP32).

## Setup


 **Install Dependencies**:
   - Open Arduino IDE.
   - Go to **Sketch** -> **Include Library** -> **Manage Libraries**.
   - Search for and install **PubSubClient** and any other required libraries for Wi-Fi.
     
   
 **Upload Code**:
   - Connect your Arduino to your computer.
   - Upload the code to your board using the Arduino IDE.
     
  
## Acknowledgments
-PubSubClient Library for making MQTT communication with Arduino easier.
-Arduino Community for helpful documentation and examples.
