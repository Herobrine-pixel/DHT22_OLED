# DHT22_OLED_Display

## Description
This Arduino library reads temperature and humidity data from a DHT22 sensor and displays it on an SSD1306 OLED screen.

## Wiring Instructions
- DHT22:
  - VCC to 3.3V or 5V
  - GND to GND
  - DATA to digital pin (e.g., D2)

- SSD1306 OLED:
  - VCC to 3.3V
  - GND to GND
  - SCL to A5 (Uno) or GPIO22 (ESP32)
  - SDA to A4 (Uno) or GPIO21 (ESP32)

## Usage
Include the library and call `begin()` in `setup()` and `update()` in `loop()`.

## Compatibility
Tested on Arduino Uno and ESP32.
