#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
	int i, k, n, x, u;
	float S[39], P[37];
	int A[39];
	int ElementosMax = 38, parametro = 0;
	
	for (k=0;k<=38;k++){
		A[k] = x;
		x = x + 10 ;
	}
	while (parametro <= ElementosMax){
		
		S[parametro] = sin(A[parametro]);
		parametro++;
	}
	for (u=0;u<=36;u++){
	P[u]= (S[u]+S[u+1]+S[u+2])/3;
	}
	printf("Los 36 elementos de la funcion son: \n\n");
	
	for (n=0;n<=36;n++){
		printf("El valor de la %d° funcion es:    %f          grados %d°      Promedio de %f \n", n ,S[n], A[n],P[n]);
	}
	return 0;
}



