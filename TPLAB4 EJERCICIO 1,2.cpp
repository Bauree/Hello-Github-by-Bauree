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

int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;
int sensor4 = A3;

struct luces{
int luzcocina;
int luzliving;
int luzdormitorio1;
int luzdormitorio2;
};
luces lcocina;
luces lliving;
luces ldormitorio1;
luces ldormitorio2;


struct temperatura{
float tmpcocina;
float tmpliving;
float tmpdormitorio1;
float tmpdormitorio2;
};
temperatura tmp1;
temperatura tmp2;
temperatura tmp3;
temperatura tmp4;


void setup(){
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

void loop(){
 
 int sensorvalor1 = analogRead(A0);
 int sensorvalor2 = analogRead(A1);
 int sensorvalor3 = analogRead(A2);
 int sensorvalor4 = analogRead(A3);
  
   
 SW1 = digitalRead(2);
 SW2 = digitalRead(3);
 SW3 = digitalRead(4);
 SW4 = digitalRead(5);

    
 
  tmp1.tmpcocina = (sensorvalor1*5.0/1024.0)*100;
  tmp2.tmpliving = (sensorvalor2*5.0/1024.0)*100;
  tmp3.tmpdormitorio1 = (sensorvalor3*5.0/1024.0)*100;
  tmp4.tmpdormitorio2 = (sensorvalor4*5.0/1024.0)*100;
  
 
  Serial.println("luces y temperaturas del hogar");
  Serial.println(' ');
  
  
  if( SW1 == HIGH){
   digitalWrite(13,HIGH);
   Serial.println("LUZ EN LA COCINA:");
   Serial.println(' ');
   Serial.println("LUZ EN LA COCINA encendida");
   Serial.println(' ');
   lcocina.luzcocina = 1;
   Serial.println(lcocina.luzcocina);
   Serial.println(' ');
   Serial.println("TEMPERATURA EN LA COCINA:");
   Serial.println(tmp1.tmpcocina);
  }
  else {
   digitalWrite(13,LOW);
   Serial.println("LUZ EN LA COCINA apagada");
   Serial.println(' ');
   lcocina.luzcocina = 0;
   Serial.println(lcocina.luzcocina);
  }
  
  Serial.println(' ');
  
  if( SW2 == HIGH){
   digitalWrite(12,HIGH);
   Serial.println("LUZ EN EL LIVING:");
   Serial.println(' ');
   Serial.println("LUZ EN EL LIVING encendida");
   Serial.println(' ');
   lliving.luzliving = 1;
   Serial.println(lliving.luzliving);
   Serial.println(' ');
   Serial.println("TEMPERATURA EN EL LIVING:");
   Serial.println(tmp2.tmpliving);
  }
  else {
   digitalWrite(12,LOW);
   Serial.println("LUZ EN EL LIVING apagada");
   Serial.println(' ');
   lliving.luzliving = 0;
   Serial.println(lliving.luzliving);
  }
  
  Serial.println(' ');
  
  if( SW3 == HIGH){
   digitalWrite(11,HIGH);
   Serial.println("LUZ EN EL DORMITORIO1:");
   Serial.println(' ');
   Serial.println("LUZ EN EL DORMITORIO1 encendida");
   Serial.println(' ');
   ldormitorio1.luzdormitorio1 = 1;
   Serial.println(ldormitorio1.luzdormitorio1);
   Serial.println(' ');
   Serial.println(" TEMPERATURA EN EL DORMITORIO1:");
   Serial.println(tmp3.tmpdormitorio1);
  }
  else {
   digitalWrite(11,LOW);
   Serial.println("LUZ EN EL DORMITORIO1 apagada");
   Serial.println(' ');
   ldormitorio1.luzdormitorio1 = 0;
   Serial.println(ldormitorio1.luzdormitorio1);
  }
  
  Serial.println(' ');
  
   if( SW4 == HIGH){
   digitalWrite(10,HIGH);
   Serial.println("LUZ EN EL DORMITORIO2:");
   Serial.println(' ');
   Serial.println("LUZ EN EL DORMITORIO2 encendida");
   Serial.println(' ');
   ldormitorio1.luzdormitorio1 = 1;
   Serial.println(ldormitorio2.luzdormitorio2);
   Serial.println(' ');
   Serial.println("TEMPERATURA EN EL DORMITORIO2:");
   Serial.println(tmp4.tmpdormitorio2);
  }
  else {
   digitalWrite(10,LOW);
   Serial.println("LUZ EN EL DORMITORIO2 apagada");
   Serial.println(' ');
   ldormitorio1.luzdormitorio1 = 0;
   Serial.println(ldormitorio2.luzdormitorio2);
  }
  
  Serial.println(' ');
  
  delay(10000);

}

