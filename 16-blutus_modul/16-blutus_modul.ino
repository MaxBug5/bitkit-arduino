const int pinLed = 13;
int val;

void setup(){
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed,LOW);
}

void loop(){
  if(Serial.available()){
    val = Serial.read();
  }

  if(val == 'H'){
    digitalWrite(pinLed, HIGH);
    Serial.println("LED ON");
  }

  if(val == 'L'){
    digitalWrite(pinLed, LOW);
    Serial.println("LED OFF");
  }

  delay(1000);
}
