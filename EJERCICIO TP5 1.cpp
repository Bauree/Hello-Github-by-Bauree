#include <iostream>
#include <math.h>

void calcularRaices(float a, float b, float c) {
	float discriminante = b * b - 4 * a * c;
	
	if (discriminante >= 0) {
		float raiz1 = (-b + std::sqrt(discriminante)) / (2 * a);
		float raiz2 = (-b - std::sqrt(discriminante)) / (2 * a);
		
		std::cout << "Las raices son reales y ";
		if (discriminante == 0) {
			std::cout << "iguales." << std::endl;
			std::cout << "Raiz: " << raiz1 << std::endl;
		} else {
			std::cout << "diferentes." << std::endl;
			std::cout << "Raiz 1: " << raiz1 << std::endl;
			std::cout << "Raiz 2: " << raiz2 << std::endl;
		}
	} else {
		std::cout << "Las raices son complejas." << std::endl;
		float parteReal = -b / (2 * a);
		float parteImaginaria = std::sqrt(-discriminante) / (2 * a);
		std::cout << "Raiz 1: " << parteReal << " + " << parteImaginaria << "i" << std::endl;
		std::cout << "Raiz 2: " << parteReal << " - " << parteImaginaria << "i" << std::endl;
	}
}

int main() {
	float a, b, c;
	
	std::cout << "Ingrese el coeficiente a: ";
	std::cin >> a;
	
	std::cout << "Ingrese el coeficiente b: ";
	std::cin >> b;
	
	std::cout << "Ingrese el coeficiente c: ";
	std::cin >> c;
	
	calcularRaices(a, b, c);
	
	return 0;
}
