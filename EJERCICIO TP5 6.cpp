#include <iostream>
#include <math.h>

const double PI = 3.14159265359;

// Función para calcular la longitud de la circunferencia
double longitudCircunferencia(double radio) {
	return 2.0 * PI * radio;
}

// Función para calcular el área del círculo
double areaCirculo(double radio) {
	return PI * pow(radio, 2);
}

// Función para calcular el volumen de la esfera
double volumenEsfera(double radio) {
	return (4.0 / 3.0) * PI * pow(radio, 3);
}

int main() {
	double radio;
	int opcion;
	
	// Solicitar al usuario el radio del círculo o esfera
	std::cout << "Ingrese el radio: ";
	std::cin >> radio;
	
	// Solicitar opción deseada
	std::cout << "Seleccione la opcion deseada:\n";
	std::cout << "1. Longitud de la circunferencia\n";
	std::cout << "2. Area del circulo\n";
	std::cout << "3. Volumen de la esfera\n";
	std::cin >> opcion;
	
	double resultado;
	
	// Calcular y mostrar el resultado
	switch (opcion) {
	case 1:
		resultado = longitudCircunferencia(radio);
		std::cout << "La longitud de la circunferencia es: " << resultado << std::endl;
		break;
	case 2:
		resultado = areaCirculo(radio);
		std::cout << "El area del circulo es: " << resultado << std::endl;
		break;
	case 3:
		resultado = volumenEsfera(radio);
		std::cout << "El volumen de la esfera es: " << resultado << std::endl;
		break;
	default:
		std::cout << "Opcion invalida. Seleccione una opcion valida (1, 2 o 3)." << std::endl;
		break;
	}
	
	return 0;
}
