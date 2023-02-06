#define LED1 7
#define LED2 8
#define LED3 9
#define PULSADOR 10

const int tiempo = 300;
bool state_pul;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop() {

  state_pul = digitalRead(PULSADOR);

  if (state_pul == HIGH){
    digitalWrite(LED1, HIGH);
    delay(tiempo);
    digitalWrite(LED2, HIGH);
    delay(tiempo);
    digitalWrite(LED3, HIGH);
    delay(tiempo);
    digitalWrite(LED3, LOW);
    delay(tiempo);
    digitalWrite(LED2, LOW);
    delay(tiempo);
    digitalWrite(LED1, LOW);
    delay(tiempo);
  }

  delay(100);
}
