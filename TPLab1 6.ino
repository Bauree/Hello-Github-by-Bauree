#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
#define TMP A0

int contador = 0;
int maximo = 100;
int tmp;

void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
}

void loop() { 
  tmp = map(((analogRead(TMP) - 20)* 3.04), 0, 1022, -40, 125);
  contador = tmp;
  if (contador < maximo){
    delay(75);
  }
  if (contador > maximo){
  contador = 99;
    delay(75);
  }
  lcd.setCursor(0,0);                      
  lcd.print("Temperatura");   
  lcd.setCursor(0,1);                      
  lcd.print(contador + String(" C "));   
  delay(100);
  }