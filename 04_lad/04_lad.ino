const int pinLed = 10;



boolean mode = true;
unsigned long lastTime = 0;
void setup() {
}

void loop() {
for (int i=0; i<=255;i++){
  analogWrite(pinLed,i);
    delay(10);

}
         
}
