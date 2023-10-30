#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);
	lcd.print("coeficientes:");
}

void loop(){
	
	if (Serial.available() > 0) {
		float a, b, c;
		
		a = Serial.parseFloat();
		delay(10); 
		b = Serial.parseFloat();
		delay(10);
		c = Serial.parseFloat();
		
		//a la hora de introducir van los tres juntos pero espaciados//
		
		float d = b*b-4*a*c;
		
		if (d > 0){
			
			float x1 = (-b + sqrt(d)) / (2 * a);
			float x2 = (-b - sqrt(d)) / (2 * a);
			
			
			lcd.clear();
			lcd.print("x1 = ");
			lcd.print(x1);
			lcd.setCursor(0, 1);
			lcd.print("x2 = ");
			lcd.print(x2);
			
		}
		
		else if (d == 0){
			float x1 = -b / (2 * a);
			lcd.clear();
			lcd.print("x1 = x2 = ");
			lcd.print(x1);
		} 
		else {
			lcd.clear();
			lcd.print("No hay raices reales");
		}
	}
}
	
