const int num1 = 65;
const float num2 = 1.12345;

void setup()
{
  Serial.begin(9600);

  //Sentencia 'print' para imprimir un valor o texto sin salto de línea
  Serial.print("Curso Iniciacion ");
  Serial.print("Arduino:");
  //'\t' para imprimir una tabulación
  Serial.print("\t");
  Serial.print("Curso 2021/2022");
  //'\n' para enviar un salto de línea y '\r' para un retorno de carro
  Serial.print("\n\r");
  Serial.print("\n\r");
  delay(2000);
}

void loop()
{
  //Ejemplo contador
  Serial.println("EJEMPLO CONTADOR");
  Serial.print("\n\r");
  for (int i=0; i<=5; i++){
    Serial.print("Contador: ");
    Serial.println(i);
    delay(500);
  }
  delay(2000);
  Serial.print("\n\r");

  //Ejemplo formatos
  Serial.println("EJEMPLO FORMATOS");
  Serial.print("\n\r");
  Serial.print("Decimal: ");
  Serial.println(num1, DEC);
  Serial.print("Binario: ");
  Serial.println(num1, BIN);
  Serial.print("Octadecimal: ");
  Serial.println(num1, OCT);
  Serial.print("Hexadecimal: ");
  Serial.println(num1, HEX);

  delay(2000);
  Serial.print("\n\r");

  //Ejemplo decimales
  Serial.println("EJEMPLO DECIMALES");
  Serial.print("\n\r");
  Serial.print("Por defecto: ");
  Serial.println(num2);
  Serial.print("0 decimales: ");
  Serial.println(num2, 0);
  Serial.print("1 decimales: ");
  Serial.println(num2, 1);
  Serial.print("2 decimales: ");
  Serial.println(num2, 2);
  Serial.print("3 decimales: ");
  Serial.println(num2, 3);
  Serial.print("4 decimales: ");
  Serial.println(num2, 4);
  Serial.print("5 decimales: ");
  Serial.println(num2, 5);

  delay(2000);
  Serial.print("\n\r");  
}
