#include <iostream>
#include <stdio.h>
using namespace std;
int i,k,n;
int largo = 0;
int tam = 0;
char cadena1[20];
char cadena2[20];
char cadenaU[40];

float unificador(char cadenaU[], char cadena1[], char cadena2[]){
while (cadena1[largo]!= '\0'){
	cadenaU[largo]= cadena1[largo];
	largo++;
}
while (cadena2[tam]!='\0'){
	cadenaU[largo]= cadena2[tam];
	tam++;
	largo++;
}
}
int main() {
	printf("Establezca la cadena 1 : \n");
	scanf ("%s", cadena1);
	printf("Establezca la cadena 2 : \n");
	scanf ("%s", cadena2);
	
	unificador(cadenaU, cadena1, cadena2);
	printf("La cadena unificada es  :\n");
	printf ("%s", cadenaU);
	return 0;
}

