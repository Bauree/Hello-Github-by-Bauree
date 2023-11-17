#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 6);
#define Rev 2
#define bot1 7

float Caudal;
unsigned int segundos;
unsigned int revol;
unsigned int tiempoInicial;
volatile byte state = LOW;
float frec;
int inicio = 0;

void setup(){
  segundos = (3000);
  lcd.begin(16,2);
  lcd.print("Caudal:");
  Serial.begin(9600);
  pinMode(Rev, INPUT);
  pinMode(bot1, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), rpm, RISING);
}

void loop(){
  if(digitalRead(bot1) == HIGH){
    tiempoInicial = millis();
    inicio = 1;
  }
  else if(inicio == 1){
while(tiempoInicial + segundos >= millis()){
    Serial.print("funciona");
  }
  	Calculador (revol);
  	lcd.setCursor(0,1);
    lcd.print(Caudal + String(" L/min "));
    
    revol = 0;
    inicio = 0;
  }
}
    void Calculador(int revol){
    frec = (revol/3);
    Caudal = (frec/7.5);
    }

    void rpm(){
      revol++;
    }
