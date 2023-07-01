#include <stdio.h>

int main() {
	int arr[10];
	int i, j, temp;
	
	printf("Ingrese 10 números enteros:\n");
	for (i = 0; i < 10; i++) {
		printf("Número %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	// Ordenación de burbuja en forma descendente
	for (i = 0; i < 10-1; i++) {
		for (j = 0; j < 10-i-1; j++) {
			if (arr[j] < arr[j+1]) {
				// Intercambiar los elementos
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nNúmeros ordenados de forma descendente:\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

