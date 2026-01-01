 const int pinMotorRight = 11;
 const int pinMotorLeft = 10;
 const int pinKey = 9;

 void setup() {
 pinMode(pinMotorRight,OUTPUT);
 pinMode(pinMotorLeft,OUTPUT);
 pinMode(pinKey,INPUT_PULLUP); 

 }
 void loop() {
 if(digitalRead(pinKey) == HIGH){ 

 digitalWrite(pinMotorRight,HIGH);
 digitalWrite(pinMotorLeft,LOW);
 }else{ 

 digitalWrite(pinMotorRight,LOW);
 digitalWrite(pinMotorLeft,HIGH);}
 }