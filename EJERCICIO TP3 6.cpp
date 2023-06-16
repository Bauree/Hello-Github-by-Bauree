#include <stdio.h>
#include <math.h>

int main() {
	double x1, x2;
	int n;
	double h, area = 0.0;
	double x, y;
	
	printf("Ingrese el valor de x1: ");
	scanf("%lf", &x1);
	
	printf("Ingrese el valor de x2: ");
	scanf("%lf", &x2);
	
	printf("Ingrese la cantidad de rectángulos (mayor valor, mayor precisión): ");
	scanf("%d", &n);
	
	h = (x2 - x1) / n;
	
	for (int i = 0; i < n; i++) {
		x = x1 + i * h; 
		y = sin(x) * sin(x); 
		area += y * h; 
	}
	
	printf("El área bajo la curva entre x1=%.2lf y x2=%.2lf es: %.4lf\n", x1, x2, area);
	
	return 0;
}
