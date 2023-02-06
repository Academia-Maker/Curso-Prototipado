#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // Se ajusta la direccion 0x27 y las dimensiones de la pantalla 16x2

void setup()
{
  lcd.init();                      // Inicializa el LCD
  // Imprimimos mensajes en LCD
  lcd.backlight(); //Se activa luz de fondo
  lcd.setCursor(0,0); //Columna 0, fila 0
  lcd.print("Hello, world!");
  lcd.setCursor(0,1); //Columna 0 Fila 1
  lcd.print("Arduino!");
}


void loop()
{
}
