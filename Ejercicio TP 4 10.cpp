#include <stdio.h>

int main() {
	int i;
	char cadena[100];
	int largo = 0;
	
	printf("Ingrese la cadena que desea leer e invertier: ");
	scanf("%99[^\n]", cadena); 
	
	while (cadena[largo] != '\0') {
		largo++;
	}
	
	printf("\nLa cadena invertida es: ");
	for (i=largo;i>=0;i--) {
		printf("%c", cadena[i]);
	}
	return 0;
}
