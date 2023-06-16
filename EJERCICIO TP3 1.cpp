#include <iostream>
#define PI 3.14159
float R, S;
char X;

int main() {
	printf ("Ingrese el radio de de su circulo: ");
	scanf ("%f", &R);
	scanf ("%c", &X);
	printf ("¿Qué es lo que desea realizar?");
	printf ("\n (a):Cálculo de la longitud de la circunferencia \n (b)Cálculo del área del círculo \n (c)Cálculo del volumen de la esfera\n");
	scanf ("%c", &X);
	switch(X) {
	case 'a':
		S = 2*PI*R;
		break;
	case 'b': 
		S = PI*(R*R);
		break;
	case 'c':
		S = 4*PI*(R*R*R)/3;
		break;
	}
	printf ("El resultado de la operación es: %f", S);
	
	return 0;
}

