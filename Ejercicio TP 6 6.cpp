#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int largo=0;
int contador=0;
char cadena[20], variable[1];
float Analizador(char cadena[], char variable[]){
	while (cadena[largo]!= '\0'){
	if (cadena[largo] == variable[0]){
	contador++;
	}
	else{}
	largo++;
	}
}
int main() {
	printf ("Establezca la cadena que desea analizar: \n");
	scanf ("%s", cadena);
	printf ("\nEstablezca el valor que desea cuantificar en la cadena: \n");
	scanf ("%s", variable);
	
	Analizador(cadena, variable);
	printf ("La variable -%c- se repite %d veces en la cadena analizada",variable[0] ,contador);
	return 0;
}

