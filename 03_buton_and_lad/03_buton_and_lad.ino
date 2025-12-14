const int pinLed = 12;
const int pinKey = 11;

boolean mode = true;
unsigned long lastTime = 0;
void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinKey, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(pinKey) == LOW);
  {
    delay(300);

    mode = !mode;
  }
  if (mode){
    if(millis()-lastTime > 3000);{

      lastTime = millis();
      digitalWrite(pinLed,!digitalRead(pinLed));
    }
  }else{digitalWrite(pinLed,HIGH);
          delay(500);
          digitalWrite(pinLed,LOW);
  }
  
         
}
