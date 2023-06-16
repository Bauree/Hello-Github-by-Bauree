#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
	int n;
	int contador = 0;
	for(int i=0; i<10; i++)
	{ 
			printf ("Ingrese un número aleatório");
		
			scanf("%d", &n);
	
			int r=n%3;
	
			if (r==0){
			contador++;
						}
	
					}
printf ("%d", contador); 
}
