#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int resol(float a, float b, float c,float *x1,float *x2){
*x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
*x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
}
int main() {
	float A, B, C, x1, x2;
	printf ("Establezca un valor para A : ");
	scanf ("%f", &A);
	printf ("Establezca un valor para B : ");
	scanf ("%f", &B);
	printf ("Establezca un valor para C : ");
	scanf ("%f", &C);
	resol(A,B,C,&x1,&x2);
	
	printf ("Las Raices son:\n\n");
	printf("x1 = %f",x1); 
	printf("\nx2 = %f",x2);
	return 0;
}

