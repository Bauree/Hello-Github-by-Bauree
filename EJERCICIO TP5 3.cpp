#include <iostream>

float calcularRequiv(float R1, float R2, float R3) {
	float Requiv = 1.0 / (1.0/R1 + 1.0/R2 + 1.0/R3);
	return Requiv;
}

int main() {
	float R1, R2, R3;
	
	std::cout << "Ingrese el valor de R1: ";
	std::cin >> R1;
	
	std::cout << "Ingrese el valor de R2: ";
	std::cin >> R2;
	
	std::cout << "Ingrese el valor de R3: ";
	std::cin >> R3;
	
	float Requiv = calcularRequiv(R1, R2, R3);
	
	std::cout << "El valor de Requiv es: " << Requiv << std::endl;
	
	return 0;
}
