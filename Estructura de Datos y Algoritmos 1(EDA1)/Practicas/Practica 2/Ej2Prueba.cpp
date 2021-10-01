#include <stdio.h>
#include <stdlib.h>
int n;
void muestra (int *a, int n);
int main()
{
	int a[n];
	printf("\n Ingrese el tama¤o del arreglo: ");
	scanf("%d",&n);
	muestra();
}

void muestra (int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Ingrese el dato del arreglo [%d]: \n",i);
		scanf("%d",&a[i]);
	}
}
