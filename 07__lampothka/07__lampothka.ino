const int pinLed = 10;
const int pinFoto = A0;

int value = 0;
int bright = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
value = analogRead(pinFoto);
Serial.println(value);
delay(50);
bright = map(value,0,1024,0,255);
analogWrite(pinLed,bright)

}
