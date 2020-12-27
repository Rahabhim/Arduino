#include <Servo.h>

// Solo para mover el servo hasta 180 grados
// marron - grd
// rojo - 5v
// naranja - pin 8 (u otro)

Servo servo;

void setup() {
  servo.attach(8);
  servo.write(0);
  delay(2000);

}

void loop() {
  servo.write(90);
  delay(1000);
  servo.write(0);
  delay(1000);
}
