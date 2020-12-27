#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int PindelSensor = 6;
int EstadodelSensor = 0;
int EstadoPreviodelSensor = 0;
int Contestar;

void setup() {
  lcd.begin(16, 2);
  pinMode(PindelSensor, INPUT);

  lcd.print("Soy Nayleen-Bot!");

  lcd.setCursor(0, 1);
  lcd.print("Preguntame algo");
}

void loop() {
  EstadodelSensor = digitalRead(PindelSensor);

  if(EstadodelSensor != EstadoPreviodelSensor){
    if(EstadodelSensor == LOW){
      Contestar = random(8);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Nayleen dice:");
      lcd.setCursor(0, 1);

      switch(Contestar){
        case 0:
        lcd.print("Juanchi dice NO");
        break;
        case 1:
        lcd.print("Juanchi dice SI");
        break;
        case 2:
        lcd.print("Me gusta tinto");
        break;
        case 3:
        lcd.print("Quiero vino");
        break;
        case 4:
        lcd.print("mmm no se");
        break;
        case 5:
        lcd.print("Creo que no");
        break;
        case 6:
        lcd.print("Puede ser");
        break;
        case 7:
        lcd.print("Estoy de acuerdo");
        break;
      }
    }
  }

  EstadoPreviodelSensor = EstadodelSensor;

}
