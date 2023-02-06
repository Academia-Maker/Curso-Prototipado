#include <HCSR04.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

HCSR04 hcsr(5, 6); //Inicializamos la clase HCSR04(trig pin , echo pin)
LiquidCrystal_I2C lcd(0x27,16,2);  // Se ajusta un display de 16x2 con direccion 0x27

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  delay(1000);
  lcd.clear();
}

void loop() {
  int distancia = hcsr.dist(); //Devuelve la distancia en cm
  lcd.setCursor(0, 0);
  lcd.print("Dist:");
  lcd.setCursor(5, 0);
  lcd.print(distancia);
  lcd.print(" cm     ");
  delay(300);
}
