#include <stdio.h>

int main() {
	int arr[10];
	int i, j, temp;
	
	printf("Ingrese 10 n�meros enteros:\n");
	for (i = 0; i < 10; i++) {
		printf("N�mero %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// Ordenaci�n de burbuja
	for (i = 0; i < 10-1; i++) {
		for (j = 0; j < 10-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nN�meros ordenados de forma ascendente:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
