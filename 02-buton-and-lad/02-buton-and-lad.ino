const int pinLed = 12;
const int pinKey = 11;

bool ledState = false;       // Стан світлодіода
bool lastButtonState = HIGH; // Попередній стан кнопки (HIGH через INPUT_PULLUP)

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinKey, INPUT_PULLUP);
}

void loop() {
  bool currentButtonState = digitalRead(pinKey);

  // Перевіряємо перехід: HIGH -> LOW (одне натискання)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    ledState = !ledState; // Перемикаємо стан
    digitalWrite(pinLed, ledState);
    delay(50); // антидребезг кнопки
  }

  lastButtonState = currentButtonState; // Оновлюємо стан
}
