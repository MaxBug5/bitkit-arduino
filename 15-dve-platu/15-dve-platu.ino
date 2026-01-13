const int pinKey1 = 12; // піни кнопок
const int pinKey2 = 11;

void setup() {
  Serial.begin(9600);        // увімкнення Serial
  pinMode(pinKey1, INPUT_PULLUP); // кнопка 1 з підтяжкою
  pinMode(pinKey2, INPUT_PULLUP); // кнопка 2 з підтяжкою
}

void loop() {
  if (digitalRead(pinKey1) == LOW) { // кнопка 1 натиснута
    Serial.print("H");
    delay(300); // невелика затримка від дребезгу
  }

  if (digitalRead(pinKey2) == LOW) { // кнопка 2 натиснута
    Serial.print("L");
    delay(300);
  }
}
