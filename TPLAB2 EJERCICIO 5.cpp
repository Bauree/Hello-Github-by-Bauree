#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);
	lcd.print(" coord. polares:");
}

void loop(){
	
	if (Serial.available() > 0) {
		float modulo, angulo;
		
		r = Serial.parseFloat();
		delay(10); 
		tita = Serial.parseFloat();
		
		float x = r * cos(angulo);
		float y = r * sin(angulo);
		
		
		
		lcd.clear();
		lcd.print("x = ");
		lcd.print(x);
		lcd.setCursor(0, 1);
		lcd.print("y = ");
		lcd.print(y);
		
		
		
	}
}  
