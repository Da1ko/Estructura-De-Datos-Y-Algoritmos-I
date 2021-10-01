#include<stdio.h>
#include<stdlib.h>
struct cuates
{
	char nombre[20];
	int  edad;
	float peso;
}var1;
int main()
{
	int n;
	printf("Cuantos amigos tienes\?\n");
	scanf("%d",&n);
	struct cuates cu[n];
	for (int i=0;i<n;i++)
	{
		printf("Dame el nombre del cuate %d: ",i);
		fflush(stdin);
		gets(cu[i].nombre);
		printf("Dame la edad del cuate %d: ",i);
		scanf("%d",&cu[i].edad);
		printf("Dame el peso del cuate %d: ",i);
		scanf("%f",&cu[i].peso);
		printf("\n");
	}
	for (int i=0;i<n;i++)
	printf("\n%s tiene %d a¤os y pesa %.2f",cu[i].nombre,cu[i].edad,cu[i].peso);
}
