#include <iostream>
#include <math.h>

void calcularRaices(float a, float b, float c, int seleccion, float& raiz) {
	float discriminante = b * b - 4 * a * c;
	
	if (discriminante >= 0) {
		float raiz1 = (-b + std::sqrt(discriminante)) / (2 * a);
		float raiz2 = (-b - std::sqrt(discriminante)) / (2 * a);
		
		if (seleccion == 1) {
			raiz = raiz1;
		} else if (seleccion == 2) {
			raiz = raiz2;
		} else {
			std::cout << "Opci�n inv�lida. Seleccione 1 o 2." << std::endl;
			return;
		}
		
		std::cout << "La ra�z " << seleccion << " es: " << raiz << std::endl;
	} else {
		std::cout << "Las ra�ces son complejas. No se puede seleccionar una ra�z." << std::endl;
	}
}

int main() {
	float a, b, c;
	int seleccion;
	
	std::cout << "Ingrese el coeficiente a: ";
	std::cin >> a;
	
	std::cout << "Ingrese el coeficiente b: ";
	std::cin >> b;
	
	std::cout << "Ingrese el coeficiente c: ";
	std::cin >> c;
	
	std::cout << "Seleccione una ra�z (1 o 2): ";
	std::cin >> seleccion;
	
	float raiz;
	calcularRaices(a, b, c, seleccion, raiz);
	
	return 0;
}
