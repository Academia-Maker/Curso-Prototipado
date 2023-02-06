//Se define constante LED con valor 9
#define LED 9
//Se define constante PULSADOR con valor 10
#define PULSADOR 10

//Variable para estado actual del pulsador
bool state_pul;
//Variable para estado anterior del pulsador
bool state_pul_old;
//Variable para estado del led
bool state_led = LOW;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
  digitalWrite(LED, LOW);
}

void loop() {

  //Se lee la entrada del pulsador
  state_pul = digitalRead(PULSADOR);

  //Solo si el estado actual del pulsador es 'HIGH' y en la iteración
  //anterior fue 'LOW', significa que estamos ante una nueva pulsación,
  //por tanto cambiamos el estado del LED
  if((state_pul == HIGH) && (state_pul_old == LOW)){
    state_led = !state_led;
  }

  digitalWrite(LED, state_led);

  state_pul_old = state_pul;

  delay(100);

}
