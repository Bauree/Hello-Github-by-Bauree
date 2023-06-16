#include <stdio.h>
#include <iostream>
#include <math.h>
#define pi 3.14159265

float y, x;
int i;

int main(){
	for (i=0; i<50; i++){
		y = sin(x) + 0.7*cos(2*x) + 0.5*sin(3*x);
		x = x + 0.251327412;
		printf ("\n \n el resultado de y cuando x es %f es %f", x, y);
	}
	
	return 0;
}
