/*
 * Smart Countdown
 * Assignment 1 - Programming C++ for Engineers Using Arduino
 *
 * Counts down from startValue to 1. On each step it prints the current
 * count to the Serial Monitor and blinks the on-board LED that many times.
 * When the countdown ends it prints a completion message.
 *
 * Author: Emmanuel Kwasi Sarkodie  (Index 2526400621, Group A)
 * Board : Arduino Uno (built-in LED on pin 13)
 */

int startValue = 5;     // where the countdown begins
int ledPin = 13;        // on-board LED on the Arduino Uno
int blinkTime = 200;    // ms the LED stays on/off per blink
int stepPause = 1000;   // ms to wait between countdown steps

// Blink the LED `times` times. Uses its own counter so it does not
// interfere with the countdown variable in setup().
void flashLED(int times) {
  int blinksLeft = times;
  while (blinksLeft > 0) {
    digitalWrite(ledPin, HIGH);
    delay(blinkTime);
    digitalWrite(ledPin, LOW);
    delay(blinkTime);
    blinksLeft = blinksLeft - 1;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);        // blink the LED `count` times
    delay(stepPause);       // pause before the next step

    count = count - 1;      // decrement so the loop eventually ends
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty on purpose: everything runs once in setup().
}
