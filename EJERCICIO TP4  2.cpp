#include <iostream>

int main() {
	int k, contadorp = 0, contadori = 0;
	int numeros [10];
	float suma;
	float promediop = 0;
	float promedioi = 0;
	float suma2;
	
	for(k=0; k<10; k++){
		printf("ingrese el número:  ");
		scanf("%d", &numeros[k]);
		if (k % 2 == 0){
			suma = suma + numeros[k];
			contadorp ++;
		}
		else {
			suma2 = suma2 + numeros[k];
			contadori ++;
		}
		
	}
	
	promediop = suma/contadorp;
	promedioi = suma2/contadori;
	
	printf(" la suma de los números pares es:  %f\n", suma);
	printf(" la suma de los números impares es:  %f\n", suma2);
	printf(" promedio de los números pares es:  %f\n", promediop);
	printf(" promedio de los números impares es:  %f\n", promedioi);
	
	return 0;
}

