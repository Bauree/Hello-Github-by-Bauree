#include <stdio.h>

int main() {
	int i, k;
	char cadena[100];
	int largo = 0, vocales = 0, maximolargo;
	
	printf("Ingrese la cadena que desea encriptar: ");
	scanf("%99[^\n]", cadena); 
	
	while (cadena[largo] != '\0') {
		
		cadena[largo] = (cadena[largo] + 3);
		maximolargo = largo;
		largo++;
	}
	
	printf("\nEl mensaje encriptado es: %s", cadena);
	return 0;
}
