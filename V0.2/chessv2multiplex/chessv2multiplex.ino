// Chess Speaks for Itself v.0.1.2
// Code and conept by Matthew A. Bardin [2026]
// this version is for testing multiple switches at once, before the multiplexer
// currently has 16 switches. Next version scales to 64 with multiple mplex

#include <light_CD74HC4067.h>

CD74HC4067 mux(8,9,10,11); //s0 s1 s2 s3
const int signal_pin = 3
int dTime = 100; // delay time for multiplexer

void setup() {
  // Switch Pin inputs
  pinMode(signal_pin, INPUT);

  // begin Serial Communication
  Serial.begin(9600);
}

void loop() {

// loop through channels 0 - 15
      for (byte i = 0; i < 16; i++) {
          mux.channel(i);
          int val = digitalRead(signal_pin);
          Serial.print(i + 1);  // Print channel
          Serial.print(" ");
          Serial.print(val); // print val
          delay(dTime); // slight delay for multiplexer 
      }
      Serial.println(" "); // carriage return after all 16
}
