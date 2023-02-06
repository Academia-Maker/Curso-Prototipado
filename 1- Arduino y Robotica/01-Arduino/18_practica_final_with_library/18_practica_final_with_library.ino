#include <Servo.h>
#include <HCSR04.h> //Se incluye la libreria HCSR04 (https://www.arduino.cc/reference/en/libraries/hcsr04-ultrasonic-sensor/)

#define ECHO 5
#define TRIG 6
#define BUZZ 11
#define LED_R 2
#define LED_A 3
#define LED_V 4

Servo barrera;

const float dist_1 = 10.0; //Distancia para cerrar barrera
const float dist_2 = 30.0; //Distancia para abrir barrera

float distancia;
const int espera = 100; //Tiempo de espera en ms
const int abierto= 90; //Angulo de barrera abierta
const int cerrado = 0; //Angulo de barrera cerrada

HCSR04 HC_SR(TRIG, ECHO); //Inicialización de la clase HCSR04 (trig pin , echo pin)
 
void setup() {
   Serial.begin(9600);
  
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
   distancia = HC_SR.dist(); //Se mide la distancia en CM
   Serial.println(distancia);
   if (distancia < dist_1){           // Cuando la distancia es mínima: luz roja, baja la barrera y se enciende el buzzer
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_V, LOW);
    digitalWrite(LED_A, LOW);
    barrera.write(cerrado);
    delay(espera);

   }
   else if (distancia < dist_2 && distancia >= dist_1) {      // cuando la distancia está entre máx y min: se encide la luz amarilla
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_V, LOW);
    digitalWrite(LED_A, HIGH);    
    barrera.write(abierto);
    delay(espera);
   }

   else { //Cuando distancia es mayor que la distancia máxima
    digitalWrite(BUZZ, LOW);
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_V, HIGH);
    digitalWrite(LED_A, LOW);
    
    barrera.write(cerrado);
    delay(espera);
  
   }
   
}
