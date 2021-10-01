//ejemplo de cola
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *cola, op, i=-1, dato, x, tam;
	printf("De que tamano quiere la cola?\n");
	scanf("%d", &tam);
	cola=(int*)malloc(tam*sizeof(int));
	do
	{

	printf("Que accion desea realizar? \n");
	printf("1.-Ingresar datos a ala cola\n");
	printf("2.-Eliminar datos de la cola\n");
	printf("3.-Mostrar datos de la cola\n");
	printf("4.-Mostrar un elemento de la cola\n");
	printf("5.-Salir\n");
	scanf("%d", &op);
		switch(op)
		{
			case 1:
				i++;
				printf("Que valor desea ingresar?\n");
				scanf("%d", &dato);
				cola[i]=dato;
				break;
				
			case 2:
				if(i<0)
				{
					printf("No existen datos en la cola\n");
				}
				for(int j=0;j<=i;j++)
				{
				cola[j]=cola[j+1];
				}
				i--;
				break;
				
			case 3:
				for(int j=0;j<=i;j++)
				{
					printf("%d\n", cola[j]);
				}				
				break;
				
			case 4:
				printf("Que elemento desea mostrar?\n");
				scanf("%d", &x);
				printf("El valor solicitado es: %d\n", cola[x]);
				break;
			
			case 5:
				printf("Hasta la vista beibi\n");
				break;
		}
	}while(op<5);
}
