#include <iostream>

// Funci�n para a�o es bisiesto
bool esBisiesto(int anio) {
	return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Funci�n para la cantidad de d�as en cada mes
int diasEnMes(int mes, int anio) {
	const int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (mes == 2 && esBisiesto(anio)) {
		return 29;
	}
	
	return diasPorMes[mes];
}

// Funci�n para num. de d�as
int numeroDiaDelAnio(int dia, int mes, int anio) {
	int cantidadDias = dia;
	for (int i = 1; i < mes; ++i) {
		cantidadDias += diasEnMes(i, anio);
	}
	
	return cantidadDias;
}

int main() {
	int dia, mes, anio;
	
	// Solicitar al usuario la fecha
	std::cout << "Ingrese el d�a: ";
	std::cin >> dia;
	
	std::cout << "Ingrese el mes: ";
	std::cin >> mes;
	
	std::cout << "Ingrese el a�o: ";
	std::cin >> anio;
	
	// Obtener el n�mero de d�a
	int numeroDiaAnio = numeroDiaDelAnio(dia, mes, anio);
	
	std::cout << "El n�mero de d�a del a�o es: " << numeroDiaAnio << std::endl;
	
	return 0;
}
