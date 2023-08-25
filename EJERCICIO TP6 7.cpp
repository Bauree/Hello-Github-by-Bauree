#include <iostream>
#include <vector>
std::vector<std::vector<double>> multiplicarMatrices(const std::vector<std::vector<double>>& matriz1, const std::vector<std::vector<double>>& matriz2) {
	if (matriz1.size() != 3 || matriz1[0].size() != 3 || matriz2.size() != 3 || matriz2[0].size() != 3) {
		throw std::invalid_argument("Las matrices no son 3x3");
	}
	std::vector<std::vector<double>> resultado(3, std::vector<double>(3, 0.0));	
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				resultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
	return resultado;
}
int main() {
	std::vector<std::vector<double>> matriz1(3, std::vector<double>(3, 0.0));
	std::vector<std::vector<double>> matriz2(3, std::vector<double>(3, 0.0));
	
	std::cout << "Ingrese los elementos de la primera matriz 3x3:" << std::endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "Elemento (" << i << ", " << j << "): ";
			std::cin >> matriz1[i][j];
		}
	}
	std::cout << "Ingrese los elementos de la segunda matriz 3x3:" << std::endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << "Elemento (" << i << ", " << j << "): ";
			std::cin >> matriz2[i][j];
		}
	}
	
	std::vector<std::vector<double>> resultado = multiplicarMatrices(matriz1, matriz2);
	
	std::cout << "Producto de las matrices:" << std::endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << resultado[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
