#define RED 13
#define ORANGE 12
#define GREEN 11
#define YELLOW 10
#define TAMANIO 4

int boton1 = 2;
int boton2 = 3;
int boton3 = 4;
int boton4 = 5;

int i;

int sensor1 = A0;
int sensor2= A1;
int sensor3 = A2;
int sensor4 = A3;


int SW1= 0;
int SW2= 0;
int SW3= 0;
int SW4= 0;

String luces = "0000";
char *punteroestado = &luces[0];

float arraytmp[TAMANIO];
float *ptrtmp = arraytmp;


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
  pinMode(boton3,INPUT);
  pinMode(boton4,INPUT);
  Serial.begin(9600);
 
}

void loop()
{
  
  SW1 = digitalRead(2);
  SW2 = digitalRead(3);
  SW3 = digitalRead(4);
  SW4 = digitalRead(5);
  
 int sensorvalor1 = analogRead(A0);
 int sensorvalor2 = analogRead(A1);
 int sensorvalor3 = analogRead(A2);
 int sensorvalor4 = analogRead(A3);
  

  *ptrtmp = (sensorvalor1*5.0/1024.0)*100;
  *(ptrtmp + 1)= (sensorvalor2*5.0/1024.0)*100;
  *(ptrtmp + 2) = (sensorvalor3*5.0/1024.0)*100;
  *(ptrtmp + 3) = (sensorvalor4*5.0/1024.0)*100;
  Serial.print("Temperaturas de los ambientes: ");
  Serial.println(' ');
  
  for (i = 0; i < TAMANIO; i++)
  {
   Serial.print(*(ptrtmp  + i));
   Serial.println(' ');
  }
  Serial.println(' ');

  
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
  Serial.println(luces);
  }
  else {
  *(punteroestado + 1) = '0';
  Serial.println(luces);
  }

  
  
if( SW3 == HIGH){
   digitalWrite(11,HIGH);
   delay(1000);
   digitalWrite(11,LOW);
  *(punteroestado + 2) = '1';
  Serial.println(luces);
  }
  else {
  *(punteroestado + 2) = '0';
  Serial.println(luces);
  }
  
 if( SW4 == HIGH){
    digitalWrite(10,HIGH);
   delay(1000);
   digitalWrite(10,LOW);
  *(punteroestado + 3) = '1';
  Serial.println(luces);
  }
  else {
  SW4 == LOW;
  *(punteroestado + 3) = '0';
  Serial.println(luces);
  }
  
 Serial.println(luces);
 delay(10000);
    }
   
  
 
 
      
