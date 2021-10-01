#include <stdio.h>
#include <stdlib.h>
main()
{
	int filas,columnas;
	int temporal;
	printf("Cuantas columnas tendra tu primera matriz? ");
	scanf("%d",&columnas);
	printf("Cuantas filas tendra tu primera matriz? ");
	scanf("%d",&filas);
	printf("\n Ingrese los valores de la matriz 1:\n");
	int array[filas][columnas];
	for(int i=0; i<filas; i++)
	{
		for(int j=0; j<columnas; j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("\n La matriz 1 que capturaste es :\n");
	for(int i=0;i<filas;i++)
	{
 		for(int j=0;j<columnas;j++)
		{
 			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}
	int filas2,columnas2;
	printf("\n Cuantas columnas tendra tu segunda matriz? ");
	scanf("%d",&columnas2);
	printf("Cuantas filas tendra tu segunda matriz? ");
	scanf("%d",&filas2);
	printf("\n Ingrese los valores de la matriz 2:\n");
	int array2[filas2][columnas2];
	for(int k=0; k<filas2; k++)
	{
		for(int o=0; o<columnas2; o++)
		{
			scanf("%d",&array2[k][o]);
		}
	}
	printf("\n La matriz 2 que capturaste es :\n");
	for(int k=0;k<filas2;k++)
	{
 		for(int o=0;o<columnas2;o++)
		{
 			printf("%d \t",array2[k][o]);
		}
		printf("\n");
	}
	int temp=0,temp2=0;
	printf("Filas intercaladas:\n");
	while(temp<columnas && temp2<columnas2)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("%d\t",array[temp][j]);	
		}temp++;
		printf("\n");
		for(int o=0;o<columnas2;o++)
		{
			printf("%d\t",array2[temp2][o]);	
		}temp2++;
		printf("\n");
	}
	printf("\n");
return 0;	
}
