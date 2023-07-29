#include <iostream>
#include <math.h>

struct Point3D {
	double x;
	double y;
	double z;
};
double distanceBetweenPoints(const Point3D& p1, const Point3D& p2) {
	double dx = p2.x - p1.x;
	double dy = p2.y - p1.y;
	double dz = p2.z - p1.z;
	
	return std::sqrt(dx * dx + dy * dy + dz * dz);
}
int main() {
	double x1, y1, z1, x2, y2, z2;

	std::cout << "Ingrese las coordenadas del primer punto (x1, y1, z1): ";
	std::cin >> x1 >> y1 >> z1;
	
	std::cout << "Ingrese las coordenadas del segundo punto (x2, y2, z2): ";
	std::cin >> x2 >> y2 >> z2;

	Point3D point1 = {x1, y1, z1};
	Point3D point2 = {x2, y2, z2};
	
	double distance = distanceBetweenPoints(point1, point2);
	std::cout << "La distancia entre los puntos es: " << distance << std::endl;

	return 0;
}
