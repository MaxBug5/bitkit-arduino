volatile unsigned int sensorCount = 0;  // лічильник імпульсів
unsigned long lastMillis = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);  // пін датчика
  attachInterrupt(digitalPinToInterrupt(2), hallISR, FALLING);
}

void loop() {
  // Раз на секунду показуємо кількість обертів
  if (millis() - lastMillis >= 1000) {

    noInterrupts();               // захист лічильника
    unsigned int pulses = sensorCount;
    sensorCount = 0;
    interrupts();

    // Якщо один оберт = 1 спрацювання
    // Якщо датчик дає 2 імпульси на оберт, ділимо на 2
    float rotations = pulses;      // або pulses / 2.0, якщо 2 імпульси/оберт

    Serial.print("Rotations per second = ");
    Serial.println(rotations);

    lastMillis = millis();
  }
}

// Переривання з фільтром для боротьби з дребезгом
void hallISR() {
  static unsigned long lastTime = 0;
  unsigned long now = millis();

  if (now - lastTime > 200) {    // 200 мс фільтр для 2 обертів/с
    sensorCount++;
    lastTime = now;
  }
}
