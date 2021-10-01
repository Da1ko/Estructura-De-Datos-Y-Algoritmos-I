#include <stdio.h>
int main()
{
	int A;
	printf("\n Ingrese el tama¤o del arreglo: ");
	scanf("%d",&A);
	
	int Apuntador[A];
	
	for(int i=0;i<A;i++)
	{
		printf("\n Ingrese el valor de A[%i]: ",i+1);
		scanf("%i",(Apuntador+i));
	}
	for(int i=0;i<A;i++)
	{
		printf("\t%i",*(Apuntador+i));
	}
}
