#include <stdio.h>
#include <stdlib.h>

main()
{
	float *ap;
	int n;
	printf("De que tamaño es el arreglo: \n");
	scanf("%d",&n);
	ap = (float*) malloc(n*sizeof(float)); //reserva memoria dinamica //size of muestra los bits para un entero
	
	for (int i=0;i<n;i++)
	{
		printf("Dame el valor de A[%d] : ",i);
		scanf("%f",(ap+i));//aritmetica de apuntadores
	}
	for (int i=0;i<n;i++)
	{
		printf("%.2f ",ap[i]);//recorrido por indice
	}
return 0;	
}
