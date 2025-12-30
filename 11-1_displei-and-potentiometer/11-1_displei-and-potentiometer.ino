#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // іноді адреса 0x27
Adafruit_BMP280 bmp;

void setup() {
  lcd.init();
  lcd.backlight();

  if (!bmp.begin(0x76)) { // іноді 0x77
    lcd.print("BMP280 ERROR");
    while (1);
  }
}

void loop() {
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("davl = ");
  lcd.print(bmp.readPressure() / 133.322); // мм рт. ст.

  lcd.setCursor(0, 1);
  lcd.print("temp = ");
  lcd.print(bmp.readTemperature());
  lcd.print(" C");

  delay(2000);
}
