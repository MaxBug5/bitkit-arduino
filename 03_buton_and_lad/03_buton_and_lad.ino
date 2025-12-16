const int pinLed = 10;



boolean mode = true;
unsigned long lastTime = 0;
void setup() {
}

void loop() {
  analogWrite(pinLed,0);
  delay(250);
  analogWrite(pinLed,64);
  delay(250);
  analogWrite(pinLed,128);
  delay(250);
  analogWrite(pinLed,192);
  delay(250);
  analogWrite(pinLed,255);
  delay(250);
         
}
