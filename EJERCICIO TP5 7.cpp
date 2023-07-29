#include <iostream>

unsigned long long factorialRecursivo(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * factorialRecursivo(n - 1);
	}
}

int main() {
	int numero;
	std::cout << "Ingrese un n�mero entero: ";
	std::cin >> numero;
	
	if (numero < 0) {
		std::cout << "El factorial no est� definido para n�meros negativos." << std::endl;
	} else {
		unsigned long long resultado = factorialRecursivo(numero);
		std::cout << "El factorial de " << numero << " es: " << resultado << std::endl;
	}
	
	return 0;
}
