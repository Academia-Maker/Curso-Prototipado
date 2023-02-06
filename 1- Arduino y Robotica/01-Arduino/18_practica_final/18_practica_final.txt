#include <Servo.h>

#define ECHO 5
#define TRIG 6
#define BUZZ 11
#define LED_R 2
#define LED_A 3
#define LED_V 4

Servo barrera;

const int dist_1 = 30;
const int dist_2 = 60;

int distancia;
const int espera = 100;
const int abierto= 90;
const int cerrado = 0;
 
void setup() {
   Serial.begin(9600);
  
   pinMode(TRIG, OUTPUT);
   pinMode(ECHO, INPUT);
   pinMode(BUZZ, OUTPUT);
   pinMode(LED_R, OUTPUT);
   pinMode(LED_V, OUTPUT);
   pinMode(LED_A, OUTPUT);

   barrera.attach(9);
   digitalWrite(LED_R,LOW);
   digitalWrite(LED_V,LOW);
   digitalWrite(LED_A,LOW);
   
   barrera.write(0);
}
 
void loop() {
   distancia = ultrasonido();
   Serial.println(distancia);
   if (distancia < dist_1){           // Cuando la distancia es mínima: luz roja, baja la barrera y se enciende el buzzer
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_V, LOW);
    digitalWrite(LED_A, LOW);
    barrera.write(cerrado);
    delay(espera);

   }
   else if (distancia <dist_2 && distancia>= dist_1) {      // cuando la distancia está entre máx y min: se encide la luz amarilla
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_V, LOW);
    digitalWrite(LED_A, HIGH);    
    barrera.write(abierto);
    delay(espera);
 

   }

   else {
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_V, HIGH);
    digitalWrite(LED_A, LOW);
    
    barrera.write(cerrado);
    delay(espera);
  
   }
   
}
 
int ultrasonido() {
   long tiempo;
   long distancia;
   digitalWrite(TRIG, LOW);
   delayMicroseconds(2);
   digitalWrite(TRIG, HIGH);
   delayMicroseconds(10);
   digitalWrite(TRIG, LOW);
   tiempo = pulseIn(ECHO, HIGH);
   
   distancia = tiempo * 10 / 292/ 2;
   return distancia;
}
