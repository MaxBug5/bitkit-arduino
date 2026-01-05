 #include <Servo.h> //бібліотека для роботи із сервоприводом
 Servo myservo; //налаштування бібліотеки
 const int pinPot = A0; //пін підключення потенціометра (джойстика)
 int val = 0; //змінна

 void setup() {
 myservo.attach(10); // вказуємо пін, до якого під’єднаний двигун
 Serial.begin(9600);
 }

 void loop() {
 val = map(analogRead(pinPot),0,1024,0,180); 

 myservo.write(val); //виставляємо сервопривід в отримане положення
 delay(10);
 Serial.println(val);
 }