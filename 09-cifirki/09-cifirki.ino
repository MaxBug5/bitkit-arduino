const int pinLedA = 12;
const int pinLedB = 11;
const int pinLedC = 10;
const int pinLedD = 9;
const int pinLedE = 8;
const int pinLedF = 7;
const int pinLedG = 6;
const int pinPot  = A0;

int var = 0;

void setup() {
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
  pinMode(pinLedC, OUTPUT);
  pinMode(pinLedD, OUTPUT);
  pinMode(pinLedE, OUTPUT);
  pinMode(pinLedF, OUTPUT);
  pinMode(pinLedG, OUTPUT);
}

void clearDisplay() {
  digitalWrite(pinLedA, LOW);
  digitalWrite(pinLedB, LOW);
  digitalWrite(pinLedC, LOW);
  digitalWrite(pinLedD, LOW);
  digitalWrite(pinLedE, LOW);
  digitalWrite(pinLedF, LOW);
  digitalWrite(pinLedG, LOW);
}

void loop() {
  var = map(analogRead(pinPot), 0, 1023, 0, 9);
  clearDisplay();

  switch (var) {
    case 0:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      break;

    case 1:
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      break;

    case 2:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 3:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 4:
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 5:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 6:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 7:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      break;

    case 8:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;

    case 9:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
  }
}
