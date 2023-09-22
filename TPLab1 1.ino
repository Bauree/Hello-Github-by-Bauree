#define G 2
#define F 3
#define E 4
#define D 5
#define C 6
#define B 7
#define A 8
#define TD1 9
#define TD2 10
#define Bot1 11
#define Bot2 12

int contador = 0;
int maximo = 100;

void setup(){
 pinMode(G, OUTPUT);
 pinMode(F, OUTPUT);
 pinMode(E, OUTPUT);
 pinMode(D, OUTPUT);
 pinMode(C, OUTPUT);
 pinMode(B, OUTPUT);
 pinMode(A, OUTPUT);
 pinMode(TD1, OUTPUT);
 pinMode(TD2, OUTPUT);
 pinMode(Bot1 , INPUT);
 pinMode(Bot2 , INPUT);
}
void loop(){
  while(contador < maximo){
    if (Bot1 == HIGH){
 	contador ++;
 }
    else if(Bot2 == HIGH){
    contador --;
  }
    mostrar(contador);
}
  contador = 0;
}
void mostrar(int contador){
  int digit1;
  int digit2;
 
  digit2= contador/10;
  digit1= contador%10;
  
  digitalWrite(TD1,HIGH);
  digitalWrite(TD2,LOW);
  switch(digit1){
    case 0: cero(); break;
  	case 1: uno(); break;
  	case 2: dos(); break;
  	case 3: tres();break;
  	case 4: cuatro();break;
  	case 5: cinco(); break;
  	case 6: seis();break;
  	case 7: siete();break;
    case 8: ocho();break;
  	case 9: nueve();break;
  }
  delay(100);
  
  digitalWrite(TD1,LOW);
  digitalWrite(TD2,HIGH);
  switch(digit2){
    case 0: cero(); break;
  	case 1: uno(); break;
  	case 2: dos(); break;
  	case 3: tres();break;
  	case 4: cuatro();break;
  	case 5: cinco(); break;
  	case 6: seis();break;
  	case 7: siete();break;
    case 8: ocho();break;
  	case 9: nueve();break;
  }
  delay (100);
}

void cero(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
void uno(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void dos(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void tres(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void cuatro(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void cinco(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void seis(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void siete(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void ocho(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void nueve(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}