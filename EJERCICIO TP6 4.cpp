#include <iostream>
#include <vector>

double calcularDeterminante(const std::vector<std::vector<double>>& matriz) {
	if (matriz.size() != 3 || matriz[0].size() != 3 || matriz[1].size() != 3 || matriz[2].size() != 3) {
		throw std::invalid_argument("La matriz no es 3x3");
	}
	
	double determinante = 0.0;
	
	determinante += matriz[0][0] * matriz[1][1] * matriz[2][2];
	determinante += matriz[0][1] * matriz[1][2] * matriz[2][0];
	determinante += matriz[0][2] * matriz[1][0] * matriz[2][1];
	
	determinante -= matriz[0][2] * matriz[1][1] * matriz[2][0];
	determinante -= matriz[0][0] * matriz[1][2] * matriz[2][1];
	determinante -= matriz[0][1] * matriz[1][0] * matriz[2][2];
	
	return determinante;
}

int main() {
	std::vector<std::vector<double>> matriz(3, std::vector<double>(3, 0.0));
	
	std::cout << "Ingrese los elementos de la matriz 3x3:" << std::endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "Elemento (" << i << ", " << j << "): ";
			std::cin >> matriz[i][j];
		}
	}
	
	double det = calcularDeterminante(matriz);
	std::cout << "Determinante: " << det << std::endl;
	
	return 0;
}
