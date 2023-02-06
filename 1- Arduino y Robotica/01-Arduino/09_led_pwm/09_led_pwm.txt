
#define LED 9

const int tiempo = 10;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  for (int i=0; i<=255; i++){
    analogWrite(LED, i);
    delay(tiempo);
  }
  
  for (int i=255; i>=0; i--){
    analogWrite(LED, i);
    delay(tiempo);
  }

}
