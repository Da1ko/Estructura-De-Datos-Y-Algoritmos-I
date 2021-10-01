//ARRLEGLO BIDIMENSIONAL CON MEMORIA DINAMICA
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int **ap;
	int n,m,i,j,x,b;
	printf("Cuantas filas y columnas tiene el arreglo?\n");
	scanf("%i",&n);
	scanf("%i",&m);
	ap=(int**)malloc(sizeof (int*)*n);
	for(i=0;i<n;i++)
	{
		ap[i]=(int*)malloc(sizeof(int)*m);
	}
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ap[i][j]=rand()%30;
		}
	}
	printf("Dame un numero para buscarlo en el arreglo:\n");
	scanf("%i",&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x==ap[i][j])
			{
				printf("El elemento %d se encuentra en la posicion %d %d\n",x,i,j);
				b=1;
			}
		}
	}
	if(b==0){
		printf("\nEl elemento no se encuentra\n");
	}
}
