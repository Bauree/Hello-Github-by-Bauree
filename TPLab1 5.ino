#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);
#define Bot1 4
#define Bot2 5

int contador = 0;
int maximo = 100;

void setup(){
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
}

void loop() { 
    if (digitalRead(Bot1)== HIGH){
      contador ++;
    }
    else if(digitalRead(Bot2)== HIGH){
      if (contador != 0){
        contador--;
      }
      if (contador == 0){
        contador = 99;
      }
    }
  lcd.setCursor(0,0);                      
  lcd.print("Contador");   
  lcd.setCursor(0,1);                      
  lcd.print(contador);   
  delay(100);
  }