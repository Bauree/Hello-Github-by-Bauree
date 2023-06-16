#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	int i=1, N, X, FACTOR = 1;
	printf ("elija un número: ");
	scanf ("%d", &N);
		
	for (i = 1; i<=N; i++)
	{
		FACTOR=i * FACTOR;
	}
	
	printf ("%d\n", FACTOR);
	
	return 0;
}

