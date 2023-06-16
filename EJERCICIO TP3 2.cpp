#include <iostream>
#include <math.h>
#define PI 3,14159

int i, V = 50, G;
float  E, A = 0;

int main() {
	G = 4*PI/V;
	for (i = 1; i<=V; i++){
			E = sin(A)+0.7*cos(2*A)+0.5*sin(3*A);
			printf ("%f \n", E);
		A = A + G;
	}
	
	return 0;
}

