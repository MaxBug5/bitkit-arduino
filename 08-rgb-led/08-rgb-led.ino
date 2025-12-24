const int pinRed = 11;
const int pinBlue = 10;
const int pinGreen = 9;

void setup() {


  randomSeed(analogRead(A0)); // better randomness
}

void loop() {
  int color = random(3); // 0, 1, or 2

  // Turn all off first
  analogWrite(pinRed, 0);
  analogWrite(pinBlue, 0);
  analogWrite(pinGreen, 0);

  if (color == 0) {
    analogWrite(pinRed, 255);
  } else if (color == 1) {
    analogWrite(pinBlue, 255);
  } else {
    analogWrite(pinGreen, 255);
  }

  delay(random(1500));

}
