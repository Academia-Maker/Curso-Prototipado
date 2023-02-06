#define BUZZER 9

const int tiempo = 500;

void setup()
{
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  digitalWrite(BUZZER, HIGH);
  delay (tiempo);
  digitalWrite(BUZZER, LOW);
  delay (tiempo);
}
