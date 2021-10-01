#include<stdio.h>
#include<stdlib.h>
int A[10],i; 
int leerArreglo(int *vA[10]);
int imprimeArreglo(int *vB[10]);
int main()
{
	
	printf("\nLeer el Arreglo\n");
	leerArreglo(A);
	printf("\nEl arreglo es:\n");
	imprimeArreglo(A);

}

int leerArreglo(int *vA[10])
{
	printf("\nIngrese 10 numeros:\n");
	for(i=0;i<10;i++)
	{
 		scanf("%i",(vA+i));
  	}
}
 
int imprimeArreglo(int *vB[10])
{
	for(i=0;i<10;i++)
	{
		printf("%i\t",*(vB+i)); 
	}
}
