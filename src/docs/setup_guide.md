# Setup Guide for AtmosPy-Monitor

## Hardware Setup
1. Connect the BMP180/BMP280 sensor to the Arduino/ESP8266.
2. Wire as follows:
   - **VCC** to 3.3V
   - **GND** to GND
   - **SCL** to D1
   - **SDA** to D2

## Arduino IoT Cloud Integration
1. Sign in to [Arduino IoT Cloud](https://create.arduino.cc/iot).
2. Create a new device, and add your ESP8266.
3. Set up variables for **temperature**, **pressure**, and **altitude** in the cloud.
4. Install the necessary libraries in your Arduino IDE:
   - ArduinoIoTCloud
   - Adafruit BMP280
5. Upload the code from `main.ino` to your board.
