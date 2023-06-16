#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
int n, suma = 0;
float r;
	for(int i=0; i<10; i++)
	{ 
		printf ("Ingrese un número aleatoreo: ");
		scanf("%d", &n);
		suma = suma + n; 
			
	}
	r = suma/10;
			
	printf ("%.4f", r);
	return 0;
}

