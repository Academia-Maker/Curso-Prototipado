//Se define la constante LED con valor 9


const int PIN_LED = 9;

void setup() {
  //Se establece el pin 9 (LED) como salida
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  //Se pone a alta el pin digital LED (led encendido)
  digitalWrite(PIN_LED, HIGH);
  //Se espera 500 ms
  delay(500);
  //Se pone a baja el pin digital LED (led apagado)
  digitalWrite(PIN_LED, LOW);
  //Se espera 500 ms
  delay(500);
}
