# Hardware

## Bill of Materials

- MCU: **ESP8266** Dev Board - see [MCU.md](MCU.md)
- light sensor: **BH1750** (`BH1750FVI`) in GY-302 kit
- OLED display: 128x64 monochrome OLED in **GME12864** kit, with **SSD1306 I2C** driver
- 3x7cm double-sided prototype board, KYNAR wires
- 3x 8-pin goldpin socket (to mount ESP8266 Dev Board and OLED display)
- IDC10 board connector: 2x angled
- IDC10 terminated ribbon cable
- optional second 3x7cm and M2 screws & nuts for "case"

## Construction

### Main board

It basically has just goldpin sockets for ESP8266 Dev Board, OLED display and IDC10 connector.

"Designed" in macOS Numbers app, as I couldn't find any better simple solution for designing prototype board that would mirror image for soldering side - exported to PDF as [./esp8266-portable-light-sensor-main-board.pdf](./esp8266-portable-light-sensor-main-board.pdf).

### Sensor

It is primitively soldered GY-302 board to IDC10 angled connector with pins trimmed.
