#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int convPol_Rec(float mod, float ang, float *real, float *imaginario){
	*real= mod*cos(ang);
	*imaginario = mod*sin(ang);
	return 0;
}
int convRec_Pol(float real, float imaginario,float *mod, float *ang){
	*mod = sqrt(real*real+imaginario*imaginario);
	*ang = atan(imaginario/real);
	return 0;
}
int main() {
	int e;
	float real,imaginario;
	float ang, mod;
	printf("Que operacion desea realizar:\n Elija 1 si desea pasar de Polar a Rectangular\n Elija 2 si desea pasar de Rectangular a Polar\n");
	scanf("%d",&e);
	if (e == 1){
	printf("Establezca un valor del modulo: ");
	scanf ("%f", &mod);
	printf("Establezca un valor del angulo: ");
	scanf ("%f", &ang);
	convPol_Rec (mod,ang,&real,&imaginario);
	printf("La conversion de Polar a Rectangular fue:\n\n");
	printf("Nª real = %f", real);
	printf("\nNª imaginario = %f", imaginario);
	}
	else if (e==2){
		printf("Establezca el valor del numero real: ");
		scanf ("%f", &real);
		printf("Establezca el valor del numero imaginario: ");
		scanf ("%f", &imaginario);
		convRec_Pol (real,imaginario,&mod,&ang);
		printf("La conversion de Rectangular a Polar fue:\n\n");
		printf("Nª modulo = %f", mod);
		printf("\nNª Angulo = %f", ang);
	}
	else {}
	return 0;
}

