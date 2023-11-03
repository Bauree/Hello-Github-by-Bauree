#define RED 13
#define ORANGE 12
#define GREEN 11
#define YELLOW 10

int boton1 = 2;
int boton2 = 3;
int boton3 = 4;
int boton4 = 5;


int SW1= 0;
int SW2= 0;
int SW3= 0;
int SW4= 0;

String luces = "0000";
char *punteroestado = &luces[0];


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(boton1,INPUT);
  Serial.begin(9600);
 
}

void loop()
{
  
  SW1 = digitalRead(2);
  SW2 = digitalRead(3);
  SW3 = digitalRead(4);
  SW4 = digitalRead(5);

  
  
  if( SW1 == HIGH){
   digitalWrite(13,HIGH);
   delay(1000);
   digitalWrite(13,LOW);
  *(punteroestado) = '1';
  Serial.println(luces);
  }
  else {
  *(punteroestado) = '0';
  Serial.println(luces);
  }
 
    
 
     
  if( SW2 == HIGH){
   digitalWrite(12,HIGH);
   delay(1000);
   digitalWrite(12,LOW);
  *(punteroestado + 1) = '1';
  }
  else {
  *(punteroestado + 1) = '0';
  }

  
  
if( SW3 == HIGH){
   digitalWrite(11,HIGH);
   delay(1000);
   digitalWrite(11,LOW);
  *(punteroestado + 2) = '1';
  }
  else {
  *(punteroestado + 2) = '0';
  }
 
  
  
 if( SW4 == HIGH){
    digitalWrite(10,HIGH);
   delay(1000);
   digitalWrite(10,LOW);
  *(punteroestado + 3) = '1';
  }
  else {
  SW4 == LOW;
  *(punteroestado + 3) = '0';
  }


 Serial.println(luces);
 delay(1000);
  
    }
   
  
 
      
