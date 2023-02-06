#define ECHO 4
#define TRIG 5
#define BUZZ 11
#define LED_R 2
#define LED_V 3

const int dist_obst = 10;

int distancia;
 
void setup() {
   pinMode(TRIG, OUTPUT);
   pinMode(ECHO, INPUT);
   pinMode(BUZZ, OUTPUT);
   pinMode(LED_R, OUTPUT);
   pinMode(LED_V, OUTPUT);
   Serial.begin(9600);
}
 
void loop() {
   distancia = ultrasonido();
   Serial.println(distancia);
   delay(500);
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
 
int ultrasonido() {
   long tiempo;
   long distancia;
   digitalWrite(TRIG, LOW);
   delayMicroseconds(2);
   digitalWrite(TRIG, HIGH);
   delayMicroseconds(10);
   digitalWrite(TRIG, LOW);

   // La función pulseIn() calcula el tiempo que tarda en detectarse un flanco de subida o bajada según
   // lo indicado en el segundo argumento de la función, en el pin del primer argumento (ECHO). Por
   // tanto con esta función podremos saber el tiempo que tarda en recibirse el eco del ultrasonidos
   tiempo = pulseIn(ECHO, HIGH);
   
   distancia = tiempo * 10 / (292 * 2);
   return distancia; //En cm, si el tiempo se pasa en microsegundos
}
