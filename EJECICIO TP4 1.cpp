#include <stdio.h>
#include <math.h>
/// Cargar los elementos del arreglo desde teclado

int main(){
	float muestra[5];
	int k;
	float suma=0;
    float sumaerror=0.0;
	float promedio;
	float ecm;
	//Ingreso de datos a un arreglo
	for (k=0;k<5;k++){
		printf("Ingrese el valor\n",k);
		scanf("%f",&muestra[k]);
		suma=suma+muestra[k];
	}
	promedio=suma/5;
	for (k=0;k<5;k++){
		sumaerror=sumaerror+ pow((promedio-muestra[k]),2.0);
		printf("sumaerror: %f\n", sumaerror);
	}	
	ecm=sqrt(sumaerror/5);
	printf("El promedio es: %f\n",promedio);
	printf("El error cuadratico es: %f \n",ecm);
	return(0);
}

