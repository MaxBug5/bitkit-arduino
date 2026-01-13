const int ledPin = 13; // пін підключення світлодіода
int var;              // змінна для збереження отриманих даних

void setup() {
  Serial.begin(9600);     // запуск Serial
  pinMode(ledPin, OUTPUT); // налаштовуємо LED як вихід
}

void loop() {
  if (Serial.available() > 0) { // якщо є вхідні дані
    var = Serial.read();        // зчитуємо символ

    if (var == 'H') {           // якщо отримали символ H
      digitalWrite(ledPin, HIGH); // увімкнути світлодіод
    }

    if (var == 'L') {           // якщо отримали символ L
      digitalWrite(ledPin, LOW);  // вимкнути світлодіод
    }
  }
}
