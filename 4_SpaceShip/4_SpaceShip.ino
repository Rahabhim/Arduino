int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    // el pulsador no está apretado

    digitalWrite(3, HIGH); //led verde
    digitalWrite(4, LOW); //led rojo
    digitalWrite(5, LOW); //led rojo
  }

  else { // el pulsador está presionado
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(50); // en pausa un cuarto de segundo
    // cambiar el estado de los leds
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(50); // en pausa un cuarto de segundo
  }
} // vuelve al comienzo del loop
