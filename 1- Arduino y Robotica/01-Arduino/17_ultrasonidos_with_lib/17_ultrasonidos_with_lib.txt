#include <HCSR04.h>

#define ECHO 4
#define TRIG 5
#define BUZZ 11
#define LED_R 2
#define LED_V 3

const float dist_obst = 10.0;

float distancia;

HCSR04 HC_SR(TRIG, ECHO); //Inicialización de la clase HCSR04 (trig pin , echo pin)

void setup() {
   pinMode(BUZZ, OUTPUT);
   pinMode(LED_R, OUTPUT);
   pinMode(LED_V, OUTPUT);
   Serial.begin(9600);
}
 
void loop() {
   distancia = HC_SR.dist(); //Se mide la distancia en CM
   Serial.println(distancia);
   delay(100);
   if (distancia < dist_obst){
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_V, LOW);
   }
   else{
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_V, HIGH);
   }
}
 
