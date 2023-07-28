#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
	int i, k, n, x;
	float S[37];
	int A[37];
	int ElementosMax = 36, parametro = 0;
	
	for (k=0;k<=36;k++){
	A[k] = x;
	x = x + 10 ;
	}
	while (parametro <= ElementosMax){
	
	S[parametro] = sin(A[parametro]);
	parametro++;
	}
	printf("Los 36 elementos de la funcion son: \n\n");
	
	for (n=0;n<=36;n++){
	printf("El valor de la %d° funcion es:    %f          grados %d°\n", n ,S[n], A[n]);
	}
	return 0;
}

