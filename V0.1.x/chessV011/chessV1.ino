// this version is for testing reed switch and magnet combinations.
// final version needs:
// 64 total switches using multiplexers and arrays
// send serial data to computer
// patch for sounds to run on Rasberry PI

const int rSwitchPin = 3;
const int testLED = 13;
int rSwitchVal = 0;
int ledState = 0;
int swap = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rSwitchPin, INPUT);
  pinMode(testLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rSwitchVal = digitalRead(rSwitchPin);

  if (rSwitchVal) {
    ledState = 1;
    xmit();
  }
  else {
    ledState = 0;
    xmit();
  }
}

void setSwap() {
  swap = ledState;
}

void xmit() {
  if (ledState != swap) {
    digitalWrite(testLED, ledState);
    Serial.print(ledState);
    setSwap();
  }
}
