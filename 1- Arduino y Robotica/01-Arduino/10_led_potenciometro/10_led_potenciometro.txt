
#define PIN_LED 9
#define PIN_POT A1

int state_pot;
int state_led;
int porcentaje;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {

  //La lectura de la entrada analógica dará como resultado un
  //valor entre 0 y 1023
  state_pot = analogRead(PIN_POT);

  //Para escalar el valor de la variable 'state_pot', cuyo valor
  //mínimo y máximo va de 0 a 1023, a un nuevo rango de valores
  //que va de 0 a 255. Esto debe hacerse dado que las entradas
  //analógicas del Arduino UNO tienen una resolución de 10 bits,
  //y las salidas PWM una resolución de 8 bits.
  state_led = map(state_pot, 0, 1023, 0, 254);
  porcentaje = map(state_led, 0, 254, 0, 100);
  
  analogWrite(PIN_LED, state_led);

  Serial.print("Valor potenciometro: ");
  Serial.println(state_pot);
  Serial.print("Valor led: ");
  Serial.println(state_led);
  Serial.print("Porcentaje %: ");
  Serial.println(porcentaje);
  //delay(1000);
}
