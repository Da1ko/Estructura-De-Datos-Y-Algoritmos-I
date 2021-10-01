#include <stdio.h>
#include<stdlib.h>
void imprime(int *Arreglo);
int* elementos(int *Arreglo);
int n;
int main() 
{
    printf("Ingrese el tama¤o de su arreglo:  ");
    scanf("%d", &n);
    int Arreglo[n];
    elementos(Arreglo);
    imprime(Arreglo);
}
int* elementos(int *Arreglo)
{
    for(int i=1; i<=n; i++)
	{
    	printf("\nIngrese el elemento[%d]: ", i);
    	scanf("%d",(Arreglo+i));
    }
    return Arreglo;
}
 
void imprime(int *Arreglo)
{
	printf("\n");
    for(int i=1; i<=n; i++)
	{
        printf("\t%d",*(Arreglo+i));
    }
}
