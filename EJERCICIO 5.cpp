#include <stdio.h>

int main() {
	int n, num, min, max;
	printf("Ingrese la cantidad de números que desea teclear: ");
	scanf("%d", &n);
	
	printf("Ingrese %d números:\n", n);
	scanf("%d", &num);
	min = num;
	max = num;
	
	for (int i = 1; i < n; i++) {
		scanf("%d", &num);
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}
	
	printf("El valor mínimo es: %d\n", min);
	printf("El valor máximo es: %d\n", max);
	
	return 0;
}
