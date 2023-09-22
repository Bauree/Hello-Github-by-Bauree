#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
}

void loop() { 
  lcd.setCursor(0,0);                      
  lcd.print("Ingenieria");   
  lcd.setCursor(0,1);                      
  lcd.print("Electronica!");   
  delay(1000);
}