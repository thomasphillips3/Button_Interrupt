// Using interrupts
int ledPin = 13;
volatile boolean flashFast = false;

void setup() {
  pinMode(ledPin, OUTPUT)
  attachInterrupt(0, buttonPressed, FALLING);
}

void loop() {
  int period = 1000;
  if (flashFast) period = 100;
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}

void buttonPressed() {
  flashFast = !flashFast;
}

