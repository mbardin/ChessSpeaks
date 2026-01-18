// Chess Speaks for Itself v.0.1.2
// Code adn conept by Matthew A. Bardin [2026]
// this version is for testing multiple switches at once, before the multiplexer
// currently has 5 distinct switches and LEDs

// pins for switches
const int rPin1 = 3;
const int rPin2 = 4;
const int rPin3 = 5;
const int rPin4 = 6;
const int rPin5 = 7;

// pins for LEDs. Final version will not have these.
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;

// store switch state
int rVal1 = 0;
int rVal2 = 0;
int rVal3 = 0;
int rVal4 = 0;
int rVal5 = 0;

// store LED state
int ledState1 = 0;
int ledState2 = 0;
int ledState3 = 0;
int ledState4 = 0;
int ledState5 = 0;

void setup() {
  // Switch Pin inputs
  pinMode(rPin1, INPUT);
  pinMode(rPin2, INPUT);
  pinMode(rPin3, INPUT);
  pinMode(rPin4, INPUT);
  pinMode(rPin5, INPUT);

  // LED outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  
  // begin Serial Communication
  Serial.begin(9600);
}

void loop() {
  // tidy up into more functional code.

  // store current switch state for all switches
  rVal1 = digitalRead(rPin1);
  rVal2 = digitalRead(rPin2);
  rVal3 = digitalRead(rPin3);
  rVal4 = digitalRead(rPin4);
  rVal5 = digitalRead(rPin5);

  // this repeats for all switches. move into seperate function.
  if (rVal1) { // if switch is closed
    ledState1 = 1; // turn LED on
    digitalWrite(LED1, ledState1); // turn LED on
    Serial.print(rPin1); // send pin number and state
    Serial.print(" ");
    Serial.print(rVal1);
    Serial.print(" ");
  }
  else {
    ledState1 = 0; // if switch is open
    digitalWrite(LED1, ledState1); // turn LED off
    Serial.print(rPin1);// send pin number and state
    Serial.print(" ");
    Serial.print(rVal1);
    Serial.print(" ");
  }

  if (rVal2) { // repeats for all 5 pins...
    ledState2 = 1;
    digitalWrite(LED2, ledState2);
    Serial.print(rPin2);
    Serial.print(" ");
    Serial.print(rVal2);
    Serial.print(" ");
  }
  else {
    ledState2 = 0;
    digitalWrite(LED2, ledState2);
    Serial.print(rPin2);
    Serial.print(" ");
    Serial.print(rVal2);
    Serial.print(" ");
  }

  if (rVal3) {
    ledState3 = 1;
    digitalWrite(LED3, ledState3);
    Serial.print(rPin3);
    Serial.print(" ");
    Serial.print(rVal3);
    Serial.print(" ");
  }
  else {
    ledState3 = 0;
    digitalWrite(LED3, ledState3);
    Serial.print(rPin3);
    Serial.print(" ");
    Serial.print(rVal3);
    Serial.print(" ");
  }

  if (rVal4) {
    ledState4 = 1;
    digitalWrite(LED4, ledState4);
    Serial.print(rPin4);
    Serial.print(" ");
    Serial.print(rVal4);
    Serial.print(" ");
  }
  else {
    ledState4 = 0;
    digitalWrite(LED4, ledState4);
    Serial.print(rPin4);
    Serial.print(" ");
    Serial.print(rVal4);
    Serial.print(" ");
  }

  if (rVal5) {
    ledState5 = 1;
    digitalWrite(LED5, ledState5);
    Serial.print(rPin5);
    Serial.print(" ");
    Serial.print(rVal5);
    Serial.print(" ");
  }
  else {
    ledState5 = 0;
    digitalWrite(LED5, ledState5);
    Serial.print(rPin5);
    Serial.print(" ");
    Serial.print(rVal5);
    Serial.print(" ");
  }
  Serial.println(); // new line for each reading.
}
