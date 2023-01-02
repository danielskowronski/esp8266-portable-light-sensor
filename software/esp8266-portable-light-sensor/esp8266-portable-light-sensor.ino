#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h> // 1.1.13
#include <Adafruit_SSD1306.h> // 2.5.7

#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET);

#include <Wire.h>
#include <BH1750.h> // 1.2.0
BH1750 lightMeter;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  lightMeter.begin();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

float lux;
char str[50];

void loop() {
  for (int i=0; i<25; i++){ // workaround for unindentified collisions in BH1750 and Adafruit_SSD1306 on ESP8266's Wire library
    //Serial.print(".");
    display.clearDisplay();
    display.setTextSize(4);
    display.setCursor(5, 0);
    display.setTextColor(WHITE);
    display.println(str);
    display.display();
  }

  lux =  lightMeter.readLightLevel();
  sprintf(str, "%5.0f\n   lx", lux);

  Serial.print(str);
  Serial.print("\n");

  delay(0); // FIXME
}
