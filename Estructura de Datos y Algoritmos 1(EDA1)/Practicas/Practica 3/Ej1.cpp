#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int Re1;
int n,n2;
int p=0, protosuario =0;
struct Agenda
{
	char nombre[20];
}olakhace;
main()
{
	struct Agenda *pern,per;
	do
	{
	printf("¿Que opcion desea?"); 
	printf("\n1.- Agregar a una persona(crea una nueva agenda)"); 	
	printf("\n2.- Eliminar a una persona"); 
	printf("\n3.- Buscar a una persona"); 
	printf("\n4.- Imprimir la agenda\n");
	scanf("%d",&n); 
	switch(n)
	{
		case 1:
			printf("Cuantas personas quieres agregar\?");
			scanf("%d",&n2);
			pern = (Agenda*) malloc(n2*sizeof(Agenda));
			for (int i=0;i<n2;i++)
			{	
				printf("\nDame el nombre de la persona: %d\n",i+1);
				fflush(stdin);
				gets(pern[i].nombre);
			}	
		break;
		
		case 2:
			char buscar2[20];
			printf("Que nombre quiere eliminar\?\n");
			fflush(stdin);
			gets(buscar2);
			for(int i=0;i<n2;i++)
			{
				if(strcmp(buscar2, pern[i].nombre)==0)
				{ 
					protosuario = 1; 
					p = i; 
		 		}
			}
			if(protosuario ==1)
			{
				for(int i = p; i< n2; i++)
				{
					strcpy(pern[i].nombre, pern[i+1].nombre);
				}	
			}
			else 
				printf("\n No se encontro ese nombre \n");
		break;
		
		case 3:
			char buscar[20];
			printf("Que nombre quiere buscar\?\n");
			fflush(stdin);
			gets(buscar);
			for(int i=0;i<n2;i++)
			{
				if(strcmp(buscar, pern[i].nombre)==0)
				{ 
					protosuario = 1; 
					p = i; 
		 		}
			}
			if(protosuario ==1)
			{
				for(int i = p; i< n2; i++)
				{
					printf("\n Si se encuentra la persona: %s\n",pern[i].nombre);	
				}
			}
			else 
			{
				printf("\n No se encontro ese nombre \n");
			}
			printf("\n");
			system("pause");
		break;
		
		case 4:
			printf("\t \n MIEMBROS DE LA AGENDA\n");
			for (int i=0;i<n2;i++)
			{
				printf("\n%s",pern[i].nombre);
			}
				printf("\n");
				system("pause");
		break;
		
		default:
			printf("\n Opcion no valida\n");
			system("pause");
		break;
	}
	system("cls");
	printf("\n\tQuieres ver el menú principal nuevamente, Escribe 1\n");
	scanf("%d",&Re1);
	}while(Re1==1);
	printf("\n Vuelva pronto");
}
