const int katode1 = 4;
const int katode2 = 5;
const int pinSegmentG = 6;   // G = 6
const int pinSegmentA = 12;  // A = 12
const int pinPot = A0;

byte numberSegment[10] = {
  0b01111110,//0
  0b00110000,//1
  0b01101101,//2
  0b01111001,//3
  0b00110011,//4
  0b01011011,//5
  0b01011111,//6
  0b01110000,//7
  0b01111111,//8
  0b01111011 //9
};

int var;
byte mask;

void setup() {
  for (int i = 4; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  var = map(analogRead(pinPot), 0, 1023, 0, 99);

  // Десятки
  digitalWrite(katode1, HIGH);
  digitalWrite(katode2, LOW);
  mask = numberSegment[var / 10];

  for (int i = 0; i < 7; i++) {
    digitalWrite(pinSegmentG + i, bitRead(mask, i));
  }
  delay(5);

  // Одиниці
  digitalWrite(katode1, LOW);
  digitalWrite(katode2, HIGH);
  mask = numberSegment[var % 10];

  for (int i = 0; i < 7; i++) {
    digitalWrite(pinSegmentG + i, bitRead(mask, i));
  }
  delay(5);
}
