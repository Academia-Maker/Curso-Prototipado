bool estado_led = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  
  int lectura = digitalRead(10);
  if (lectura == 1) {
    estado_led = !estado_led;
    digitalWrite(9, estado_led);
    delay(300);
  }
  // put your main code here, to run repeatedly:

}
