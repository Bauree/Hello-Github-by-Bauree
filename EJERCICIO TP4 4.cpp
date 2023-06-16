#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, i, k;
	int Alumno[15]={0}, contador[11]={0};
	
	for (i=1;i<=15;i++){
	printf ("ingrese la nota del alumno nº %d: ", i);
	scanf ("%d", &Alumno[i]);
	
	if (Alumno[i] == 1){
	contador[1] = contador[1] + 1;
	}
	else if (Alumno[i] == 2){
	contador[2] = contador[2] + 1;
	}
	else if (Alumno[i] == 3){
	contador[3]= contador[3] + 1;
	}
	else if (Alumno[i] == 4){
	contador[4] = contador[4] + 1;
	}
	else if (Alumno[i] == 5){
	contador[5]= contador[5] + 1;
	}
	else if (Alumno[i] == 6){
	contador[6]= contador[6] + 1;
	}
	else if (Alumno[i] == 7){
	contador[7]= contador[7]+ 1;
	}
	else if (Alumno[i] == 8){
	contador[8]= contador[8] + 1;
	}
	else if (Alumno[i] == 9){
	contador[9] = contador[9] + 1;
	}
	else if (Alumno[i] == 10){
	contador[10] = contador[10] + 1;
	}
	else{
	}
	}
	for (k=1;k<=10;k++){
		printf ("\nLa cantidad de alumnos que se saco %d es [%d]" ,k , contador[k]); 
	}
	return 0;
}

