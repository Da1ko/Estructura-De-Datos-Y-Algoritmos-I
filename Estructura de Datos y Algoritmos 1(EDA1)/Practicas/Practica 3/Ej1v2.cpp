#include<stdio.h>
#include<stdlib.h>
int n2;
struct Agenda
{
	char nombre[20];
	char nombre2[20];
	int  o;
	float peso;
}olakhace;
main()
{
	struct Agenda *pern,*buscar;
	printf("Cuantas personas quieres agregar\? ");
	scanf("%d",&n2);
	pern = (struct Agenda*) malloc(n2*sizeof(struct Agenda));
	buscar = (struct Agenda*) malloc(n2*sizeof(struct Agenda));
	for (int i=0;i<n2;i++)
	{	
		printf("\nDame el nombre de la persona: ");
		fflush(stdin);
		gets(pern->nombre);
	}
	printf("Que nombre deseas buscar:  ");
	gets(buscar->nombre);
	for(int i=0;i<n2;i++)
	{
		 if(buscar==pern){
		 	printf("El elemento %s se encuentra en la posicion %d\n",buscar,i);
		 }
	}
}
