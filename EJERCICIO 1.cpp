#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
float a,b,c,x1, x2, d;

printf( "\n coeficiente a: " );
scanf( "%f", &a);


printf( "\n coeficiente b: " );
scanf( "%f", &b);

printf( "\n coeficiente c: " );
scanf( "%f", &c);

d=pow(b, 2)-4*a*c;

if (d>=0){
	x1=(-b-sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf ("x1= %f \n", x1);
	printf ("x2= %f \n", x2);
}

else {
		printf ("Error: raices complejas\n");
	}
}

