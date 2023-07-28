#include <stdio.h>

int main() {
	int i;
	char cadena[100];
	int largo = 0, vocales = 0;
	
	printf("Ingrese la cadena que desea encriptar: ");
	scanf("%99[^\n]", cadena); 
	
	while (cadena[largo] != '\0') {
		
		cadena[largo] = (cadena[largo] + 3);
		largo++;
	}
	
	printf("\nEl mensaje encriptado es: %s", cadena);
	return 0;
}
