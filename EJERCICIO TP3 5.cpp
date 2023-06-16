#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
	double x, y, dy;
	double intervalo = 4 * PI / 49;
	
	printf("Valores de la función y = sin(x):\n");
	printf("x\t\ty\n");
	
	for (int i = 0; i <= 49; i++) {
		x = i * intervalo;
		y = sin(x);
		printf("%.4lf\t%.4lf\n", x, y);
	}
	
	printf("\nValores de la derivada de la función:\n");
	printf("x\t\tdy/dx\n");
	
	for (int i = 0; i <= 49; i++) {
		x = i * intervalo;
		dy = cos(x);
		printf("%.4lf\t%.4lf\n", x, dy);
	}
	
	return 0;
}
