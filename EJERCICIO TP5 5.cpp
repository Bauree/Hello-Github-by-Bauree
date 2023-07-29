#include <iostream>

// esto es función para calcular el valor con descuento
double calcularValorConDescuento(double precioCompra, double descuentoPorcentaje) {
	if (descuentoPorcentaje < 0 || descuentoPorcentaje > 100) {
		std::cout << "Error: El descuento debe estar entre 0 y 100%" << std::endl;
		return precioCompra;
	}
	
	double descuento = precioCompra * (descuentoPorcentaje / 100);
	double valorAPagar = precioCompra - descuento;
	return valorAPagar;
}

int main() {
	double precioCompra, descuento;
	std::cout << "Ingrese el precio de la compra: ";
	std::cin >> precioCompra;
	
	std::cout << "Ingrese el descuento en porcentaje (0 a 100%): ";
	std::cin >> descuento;
	
	double valorAPagar = calcularValorConDescuento(precioCompra, descuento);
	std::cout << "El valor a pagar con descuento es: " << valorAPagar << std::endl;
	
	return 0;
}
