const int pinPot = A0;
const int pinLed = 10;

int val = 0;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  val = analogRead(pinPot);
  Serial.println(val);

  if (val < 205) {
    // Режим 1: 0%
    brightness = 0;
  } 
  else if (val < 410) {
    // Режим 2: 25%
    brightness = 64;
  } 
  else if (val < 615) {
    // Режим 3: 50%
    brightness = 128;
  } 
  else if (val < 820) {
    // Режим 4: 75%
    brightness = 191;
  } 
  else {
    // Режим 5: 100%
    brightness = 255;
  }

  analogWrite(pinLed, brightness);
  delay(50);
}
