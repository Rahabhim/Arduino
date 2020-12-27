int ledPin = 3;
int buttonPin = 2;

// este programa hace que se apague el led al presionarlo
// Arduino Workshop - Chapter Two - Building Your First Circuit-q-jgnvvQQO8

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
}
