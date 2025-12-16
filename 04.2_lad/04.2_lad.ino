const int pinBuzzer = 10;
const int pinKey1 = 3;
const int pinKey2 = 4;



int val = 1000;
void setup() {
  pinMode(pinBuzzer,OUTPUT);
  pinMode(pinKey1,INPUT_PULLUP);

  pinMode(pinKey2,INPUT_PULLUP);
}

void loop() {
  tone(pinBuzzer,val);
  if(digitalRead(pinKey1)== LOW){
    delay(100);
    val=val + 500;
  }
  if(digitalRead(pinKey2)== LOW){
    delay(100);
    val=val-500;
  }

}
         

