#include "Arduino.h"
#include "main.h"

/***************************** STATIC VARIABLE DEFINITIONS *****************************/

// this is a constant variable, it can not be changed
// the variable is referncing pin 2 which is where the led is connected
static constexpr uint8_t LedPin = 2;


/***************************** FUNCTION DEFINITIONS *****************************/

void LedFlash(uint8_t ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);
}

void PwmGeneration(uint8_t pwmPin, uint32_t frequency) {
  // define your function here
}


/**************************** ARDUINO SETUP AND LOOP ****************************/

void setup() {
  // set the led pin as an output
  pinMode(LedPin, OUTPUT);
  // you'll also want to set your pwm pin as an output when you choose it
}

void loop() {
  // call your functions here to run forever
  LedFlash(LedPin);
}
