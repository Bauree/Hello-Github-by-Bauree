#include <stdio.h>

int main() {
	int i;
	char cadena[100];
	int largo = 0, vocales = 0;
	
	printf("Ingrese la cadena que desea escanear: ");
	scanf("%99[^\n]", cadena); 
	
	while (cadena[largo] != '\0') {
		
		if (cadena[largo] == 'a'){
			vocales++;
		}
		else if (cadena[largo] == 'A'){
			vocales++;
		}
		else if (cadena[largo] == 'e'){
			vocales++;
		}
		else if (cadena[largo] == 'E'){
			vocales++;
		}
		else if (cadena[largo] == 'i'){
			vocales++;
		}
		else if (cadena[largo] == 'I'){
			vocales++;
		}
		else if (cadena[largo] == 'o'){
			vocales++;
		}
		else if (cadena[largo] == 'O'){
			vocales++;
		}
		else if (cadena[largo] == 'u'){
			vocales++;
		}
		else if (cadena[largo] == 'U'){
			vocales++;
		}
		else{}
		largo++;
	}
	
	printf("\nLa cantidad de vocales que hay en la cadena son: %d", vocales);
	return 0;
}
