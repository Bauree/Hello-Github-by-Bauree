#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	long int cont=2, a1 = 1, a2 = 1, an, x;
	printf ("ingrese la cantidad de secuencias que desea calcular: ");
	scanf ("%d", &an);
	if (an<=0) {
		printf ("error\n");
	}
	else {
		if an>2){
			do{
				x=a1 + a2;
				cont ++;
				a2=a1;
				a1=x;
				printf("%ld , \n" , x);
			} while(cont<an);
		}
		else{
			x=1;
		}
		printf("El termino n| %d de la serie es %d\n", an, x);
	}
}
