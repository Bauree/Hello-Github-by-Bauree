#include <iostream>

int encontrarMenor(int num1, int num2, int num3) {
	int menor = num1;
	
	if (num2 < menor) {
		menor = num2;
	}
	
	if (num3 < menor) {
		menor = num3;
	}
	
	return menor;
}

int main() {
	int num1, num2, num3;
	
	std::cout << "Ingrese el primer n�mero: ";
	std::cin >> num1;
	
	std::cout << "Ingrese el segundo n�mero: ";
	std::cin >> num2;
	
	std::cout << "Ingrese el tercer n�mero: ";
	std::cin >> num3;
	
	int menor = encontrarMenor(num1, num2, num3);
	
	std::cout << "El n�mero menor es: " << menor << std::endl;
	
	return 0;
}
