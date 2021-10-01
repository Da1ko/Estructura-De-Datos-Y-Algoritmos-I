//CUBO DE UN NUMERO 
#include <stdio.h>
#include <stdlib.h>
int cubo(int*);

int main()
{
	int n;
	printf("Dame un numero:");
	scanf("%d",&n);
	printf("\nEl valor antes de la funcion es: %d",n);
	printf("\nEl cubo es: %d",cubo(&n));
	return 0;
}

int cubo(int* x)
{
	return *x =*x**x**x;
}

