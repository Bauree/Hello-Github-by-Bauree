#include <iostream>
#include <math.h>

// Función para calcular la distancia entre dos puntos en el plano
double calcularDistancia(double x1, double y1, double x2, double y2) {
	double distancia = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
	return distancia;
}

int main() {
	double x1, y1, x2, y2;
	
	std::cout << "Ingrese las coordenadas (x, y) del primer punto: ";
	std::cin >> x1 >> y1;
	
	std::cout << "Ingrese las coordenadas (x, y) del segundo punto: ";
	std::cin >> x2 >> y2;
	
	double distancia = calcularDistancia(x1, y1, x2, y2);
	std::cout << "La distancia entre los puntos es: " << distancia << std::endl;
	
	return 0;
}
