#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String mensaje = ( "Universidad Tecnologica Nacional Facultad Regional San Francisco");
int long_txt = mensaje.length();
int i;

void setup(){
	lcd.begin(16,1);
}
	void loop(){
		lcd.setCursor(0,0);
		lcd.print(mensaje);
		delay(1000);
		
		
		for(i = 0; i < long_txt; i++){
			lcd.scrollDisplayLeft();
			delay(350);
		}
		
		for(i = 0; i < (16+long_txt); i++){
			lcd.scrollDisplayRight();
			delay(350);
		}
		for(i = 0; i < 16; i++){
			lcd.scrollDisplayLeft();
			delay(350);
		}
	}
