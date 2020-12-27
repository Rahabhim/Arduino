
// este programa hace que el led de la placa parpadee

void setup() {
  pinMode(13, OUTPUT);        // pin 13 como salida
}

void loop() {
  digitalWrite(13, HIGH);     // pin 13 a nivel alto (1)
  delay(500);                // demora de 3 seg.
  digitalWrite(13, LOW);      // pin 13 a nivel bajo (0)
  delay(500);                // demora de 2 seg.
}
