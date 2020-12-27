int LR = 12;
int LA = 13;
int T;
int pin;
const int pot = 0;

void setup()
{
  pinMode(LR,OUTPUT);
  pinMode(LA,OUTPUT);
}
void loop()
{
  T = analogRead(pot);
  digitalWrite(LR,HIGH);
  delay(T);
  digitalWrite(LR,LOW);
  
  digitalWrite(LA,HIGH);
  delay(T);
  digitalWrite(LA,LOW);
  
} // https://www.youtube.com/watch?v=d5xbp9XE-Cw&t=153s
