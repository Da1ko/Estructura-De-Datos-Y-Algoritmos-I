#include <stdio.h>
#include <string.h>
int main()
{
	char Nombre1[1][20],Nombre2[1][20],Apellido1[1][20],Apellido2[1][20];
	int r;
	for(int i=0;i<1;i++)
	{
		printf("Dame tu primer nombre: ");
		fflush(stdin);
		gets(Nombre1[i]);
	}
	
	printf("\nTienes segundo nombre\? ");
	printf(" Escribe 1 si tienes o 2 si no\n");
	scanf("%d",&r);
	if(r==1)
	{
		for(int i=0;i<1;i++)
		{
			printf("\nDame tu segundo nombre: ");
			fflush(stdin);
			gets(Nombre2[i]);
		}
	}
	for(int i=0;i<1;i++)
	{
		printf("\nDame tu apellido paterno: ");
		fflush(stdin);
		gets(Apellido1[i]);
	}
	for(int i=0;i<1;i++)
	{
		printf("\nDame tu apellido materno: ");
		fflush(stdin);
		gets(Apellido2[i]);
	}	
	for(int i=0;i>=0;i--)
	{	
		printf("\nNombre(s): %s %s\n",Nombre1[i],Nombre2 [i]);
		printf("\nApellidos: %s %s\n",Apellido1[i],Apellido2 [i]);
	}
return 0;
}
