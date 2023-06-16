#include <stdio.h>
#include <math.h>

int main() {
	double x, h, dy;
	
	printf("Ingrese el valor del punto donde se calculará la derivada: ");
	scanf("%lf", &x);
	
	h = 0.0001; 
	
	dy = (sin(x + h) * sin(x + h) - sin(x) * sin(x)) / h;
	
	printf("El valor de la derivada en el punto %.2lf es: %.4lf\n", x, dy);
	
	return 0;
}
