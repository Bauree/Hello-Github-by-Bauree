#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);
	lcd.print(" coord. rectangulares:");
}

void loop(){
	
	if (Serial.available() > 0) {
		float x, y;
		
		x = Serial.parseFloat();
		delay(10); 
		y = Serial.parseFloat();
		
		float r = sqrt(pow((x), 2) + pow((y), 2));
		float tita = atan2(y,x);
		
		
		lcd.clear();
		lcd.print(" modulo  = ");
		lcd.print(r);
		lcd.setCursor(0, 1);
		lcd.print(" angulo  =  ");
		lcd.print(tita);
		
		
		
	}
}  
