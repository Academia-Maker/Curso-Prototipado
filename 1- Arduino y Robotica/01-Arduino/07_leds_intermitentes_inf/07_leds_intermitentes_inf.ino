#define LED1 7
#define LED2 8
#define LED3 9
#define PULSADOR 10

const int tiempo = 300;
bool state_pul;
bool fin = LOW;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop() {

  while ((state_pul == LOW) && (fin == LOW)){
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
    state_pul = digitalRead(PULSADOR);
  }
  fin = HIGH;

}
