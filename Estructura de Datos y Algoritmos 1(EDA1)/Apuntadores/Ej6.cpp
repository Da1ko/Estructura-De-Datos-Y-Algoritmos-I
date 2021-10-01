#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	printf("De que tama¤o es el arreglo: \n");
	scanf("%d",&n);
	int **ap;
	ap=(int**) malloc(n*sizeof(int*));
	
	for(int i=0; i<n ; i++)
	ap[i] = (int*)malloc(n*sizeof(int));
	//RESERVA LA MEMORIA DINÁMICA PARA UN ARREGLO BIDIMENSIONAL
	
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("Dame el elemento A[%d][%d] = ",i,j);
			scanf("%d",&ap[i][j]);
		}
	}
	printf("\n");
	printf("La matriz: \n");
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("\t%d",ap[i][j]);
		}
		printf("\n");
	}
}
