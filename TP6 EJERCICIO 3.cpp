#include <iostream>
#include <stdio.h>
#include <math.h>
void COMBI (int *x1, int *x2);
	int main() {
		int x1, x2;
		printf ("Establezca un valor para x1 : ");
		scanf ("%d", &x1);
		printf ("Establezca un valor para x2 : ");
		scanf ("%d", &x2);
		
		COMBI (&x1, &x2);
	printf ("invertdos los valores seria x1= %d , x2= %d ", x1, x2);  
		return 0;
	}
	
	void COMBI(int *x1, int *x2) {
		int mem = *x2;
	*x2 = *x1;
	*x1 = mem;

	}
