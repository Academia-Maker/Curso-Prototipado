// Array de números enteros con declaración de tamaño
int numeros1[5] = {1, 2, 3, 4, 5};

// Array de números enteros sin declaración de tamaño
float numeros2[] = {1, 2, 3, 4, 5};

// Array de números enteros con declaración de tamaño
int numeros3[5] = {1, 2, 3};

// Array de números enteros con declaración de tamaño y error de compilación
//int numeros4[3] = {1, 2, 3, 4, 5};

// Array de tipo String (cadena de caracteres) con declaración de tamaño
String frase1[2] = {"hola","mundo"};

// Array de tipo String sin declaración de tamaño
String frase2[] = {"Curso","Arduino","Nivel 1"};

// Al declarar un array de caracteres de esta forma se requiere que el tamaño 
// del array sea de uno más, espacio que queda reservado para el carácter
// especial Null o de fin de cadena.
char palabra1[5] = "hola";

// En cambio si el array de caracteres lo declaramos de esta otra forma, el
// tamaño del array debe ser igual o mayor al del texto declarado.
char palabra2[4] = {'h', 'o', 'l', 'a'};

// Este truco nos sirve para conocer la longitud de un array. Lo que hacemos
// es dividir el tamaño total del array en número de bytes entre el tamaño
// en bytes de uno de los elementos, lo que nos da el número de elementos
int size_array = sizeof(frase2) / sizeof(frase2[0]);

void setup()    
{    
  Serial.begin(9600);
}    
     
void loop()
{   
  for(int i=0; i<size_array; i++){
    Serial.println(frase2[i]);
    delay(300);
  }
}
