#include <Servo.h>

// marron - grd
// rojo - 5v
// naranja - pin 8 (u otro)

Servo servo;
int angle = 10;

void setup() {
  servo.attach(8);
  servo.write(angle);
  delay(2000);

}

void loop() {
  // Escanea de 0 a 180 grados
  for(angle = 10; angle < 180; angle++)
  {
    servo.write(angle);
    delay(15);
  }

  // Ahora lo opuesto
  for(angle = 180; angle > 10; angle--)
  {
    servo.write(angle);
    delay(15);
  }
}
