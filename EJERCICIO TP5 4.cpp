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
	
	std::cout << "Ingrese el primer número: ";
	std::cin >> num1;
	
	std::cout << "Ingrese el segundo número: ";
	std::cin >> num2;
	
	std::cout << "Ingrese el tercer número: ";
	std::cin >> num3;
	
	int menor = encontrarMenor(num1, num2, num3);
	
	std::cout << "El número menor es: " << menor << std::endl;
	
	return 0;
}
