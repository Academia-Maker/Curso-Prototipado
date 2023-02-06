//Se define constante LED con valor 9
#define LED 9
//Se define constante PULSADOR con valor 10
#define PULSADOR 10

//Se crea la variable "state_pul" de tipo booleano
bool state_pul;

void setup() {
  //Se establece el pin 9 (LED) como salida
  pinMode(LED, OUTPUT);
  //Se establece el pin 10 (PULSADOR) como entrada
  pinMode(PULSADOR, INPUT);
}

void loop() {
  //Se lee el estado del pin PULSADOR y se almacena en la variable 'state_pul'
  state_pul = digitalRead(PULSADOR);
  //Se escribe en el pin LED el valor de la variable 'state_pul'
  digitalWrite(LED, state_pul);
}
