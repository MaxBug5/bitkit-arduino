#include <Servo.h>

Servo myservo;

const int echoPin = 9;
const int trigPin = 8;
const int pinJoyX = A0;     // вісь X джойстика

int val, cm;
int pos = 90;               // стартове положення сервоприводу
long duration;

void setup() {
  myservo.attach(10);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myservo.write(pos);
}

void loop() {
  val = analogRead(pinJoyX); // зчитуємо вісь X джойстика

  // центральне положення джойстика
  if (val > 510 && val < 530) {
    if (pos > 91) pos--;
    if (pos < 89) pos++;
  }

  // джойстик вправо
  if (val > 1020) pos = constrain(pos + 1, 0, 180);

  // джойстик вліво
  if (val < 5) pos = constrain(pos - 1, 0, 180);

  myservo.write(pos);

  // ультразвуковий датчик
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  cm = duration / 58;

  Serial.print(cm);
  Serial.println(" cm");

  delay(10);
}
