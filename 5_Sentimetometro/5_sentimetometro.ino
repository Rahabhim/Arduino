// LM35 temp sensor connected A0

unsigned int total; // A/D readings
const int sensorPin = A0;
float tempC; // Celcius
float tempF; // Fahrenheit

void setup() {
  analogReference(INTERNAL); // use the internal ~1.1volt reference | change to (INTERNAL1V1) for a Mega
  Serial.begin(9600);
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber,OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}
void loop() {
  // read the sensor
  for (int x = 0; x < 64; x++) { // 64(max) analogue readings for averaging
    total = total + analogRead(A0); // add each value
  }
  // temp conversion
  tempC = total * 0.001632; // Calibrate by slightly changing 0.0016xx
  // tempF = tempC * 1.8 + 32; // Celcius to Fahrenheit

  Serial.print("La temperatura del sentimentometro es ");
  Serial.print(tempC, 1); // one decimal place
  Serial.println(" Celcius  ");
  //Serial.print(tempF, 0); // no decimal places
  //Serial.println(" Fahrenheit");

  if(tempC < 26.0){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } // if the temperature rises 2-4 degrees, turn an LED on 
  else if(tempC >= 27.0 && tempC < 33.0){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    Serial.println("Cuando Ceci me escribe");
  } // if the temperature rises 4-6 degrees, turn a second LED on  
  else if(tempC >= 33.0 && tempC < 39.0){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    Serial.println("Cuando me doy cuenta que Ceci me está grabando un audio");

  } // if the temperature rises more than 6 degrees, turn all LEDs on
  else if(tempC >= 39.0){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    Serial.println("Cuando escucho su tono de voz");

  }
 
  total = 0; // reset total
  delay(1000); // slows readings
}
