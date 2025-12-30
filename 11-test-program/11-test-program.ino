#include <Wire.h> // під’єднуємо бібліотеку Wire

byte error, address; // створюємо дві змінні

void setup() {
  Wire.begin();          // запуск I2C
  Serial.begin(9600);    // запуск Serial Monitor
  Serial.println("I2C scan...");
}

void loop() {
  for (address = 1; address < 127; address++) { // перебір адрес
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) { // якщо знайдено пристрій
      Serial.print("0x");
      Serial.println(address, HEX);
    }
  }

  Serial.println("Scan done");
  delay(1000); // затримка між скануваннями
}
