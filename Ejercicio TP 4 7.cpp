#include <iostream>

using namespace std;

int main() {
	int i, x;
	int parametro = 20, noPrimo;
	int numerosPrimos[20];
	int contadorPrimos = 0;
	int num = 2;
	
	while (contadorPrimos < parametro) {
	noPrimo = 1;
	for (i=2;i*i<=num;i++){
		if (num%i == 0){
		noPrimo++;
	}
	}
		if (noPrimo == 1){
			numerosPrimos[contadorPrimos] = num;
			contadorPrimos++;
	}
		num++;
	}
	printf ("los primeros 20 numeros primos son:\n");
	
	for (i=0;i<parametro;i++) {
	printf ("%d \n", numerosPrimos[i]); 
	}
	return 0;
}
