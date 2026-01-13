#include <Stepper.h>

Stepper myStepper(64, 8, 9, 10, 11);

void setup() {
  myStepper.setSpeed(60); // швидкість 60 об/хв
}

void loop() {
  myStepper.step(64);    // повний оберт (якщо 64 кроки = 1 оберт)
  delay(500);
  myStepper.step(-64);   // оберт у зворотний бік
  delay(500);
}
