#define LED_R 9
#define LED_A 8
#define LED_V 7

char option;

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(LED_V, OUTPUT);
  
  Serial.begin(9600);

  Serial.println("ELIGE QUE LED ENCENDER");
  Serial.println("");
  Serial.println("- Led Rojo:\t r");
  Serial.println("- Led Amarillo:\t a");
  Serial.println("- Led Verde:\t v");
  Serial.println("- ON todos:\t t");
  Serial.println("- OFF todos:\t x");
}

void loop()
{
  if (Serial.available() > 0){

    option = Serial.read();
    switch(option){
      case 'r':
        digitalWrite(LED_R, HIGH);
        digitalWrite(LED_A, LOW);
        digitalWrite(LED_V, LOW);
        break;
      case 'a':
        digitalWrite(LED_R, LOW);
        digitalWrite(LED_A, HIGH);
        digitalWrite(LED_V, LOW);
        break;
      case 'v':
        digitalWrite(LED_R, LOW);
        digitalWrite(LED_A, LOW);
        digitalWrite(LED_V, HIGH);
        break;
      case 't':
        digitalWrite(LED_R, HIGH);
        digitalWrite(LED_A, HIGH);
        digitalWrite(LED_V, HIGH);
        break;
      case 'x':
        digitalWrite(LED_R, LOW);
        digitalWrite(LED_A, LOW);
        digitalWrite(LED_V, LOW);
        break;
      default:
        break;
    }
    
  }
}
