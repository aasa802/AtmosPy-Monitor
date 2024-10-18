#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
#include <Wire.h>
#include <Adafruit_BMP280.h>

const char SSID[] = "your_wifi_ssid";  // Your Wi-Fi credentials
const char PASS[] = "your_wifi_password";

Adafruit_BMP280 bmp;  // Initialize the BMP280 sensor

// Variables to hold sensor data
float temperature, pressure, altitude;

void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
    Serial.println("Could not find BMP280 sensor!");
    while (1);
  }
  
  // Connect to the cloud
  ArduinoCloud.begin(SSID, PASS);
}

void loop() {
  temperature = bmp.readTemperature();
  pressure = bmp.readPressure();
  altitude = bmp.readAltitude(1013.25);  // Adjust the baseline pressure accordingly

  // Send data to the cloud
  ArduinoCloud.update();
  
  delay(300000);  // Update every 5 minutes
}
