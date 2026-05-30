#include "DHT22_OLED_Display.h"

DHT22_OLED_Display::DHT22_OLED_Display(uint8_t dhtPin, uint8_t dhtType, Adafruit_SSD1306* display)
    : dht(dhtPin, dhtType), oled(display) {}

void DHT22_OLED_Display::begin() {
    dht.begin();
    oled->begin(SSD1306_SWITCHCAPVCC, 0x3C);
    oled->clearDisplay();
    oled->setTextSize(1);
    oled->setTextColor(SSD1306_WHITE);
}

void DHT22_OLED_Display::update() {
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();
    oled->clearDisplay();
    oled->setCursor(0, 0);
    oled->print("Temp: ");
    oled->print(temp);
    oled->println(" C");
    oled->print("Humidity: ");
    oled->print(hum);
    oled->println(" %");
    oled->display();
}
