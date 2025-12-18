const int pinPot =  A0;
int val = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(pinPot); 

  Serial.print(val);
  delay(50);
}