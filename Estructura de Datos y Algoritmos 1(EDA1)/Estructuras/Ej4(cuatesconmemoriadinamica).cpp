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
	struct cuates *c;
	c = (cuates*) malloc(n*sizeof(cuates)); //Apartir de aqui c es un arreglo
	for (int i=0;i<n;i++)
	{
		printf("Dame el nombre del cuate %d: ",i);
		fflush(stdin);
		gets(c[i].nombre);
		printf("Dame la edad del cuate %d: ",i);
		scanf("%d",&c[i].edad);
		printf("Dame el peso del cuate %d: ",i);
		scanf("%f",&c[i].peso);
		printf("\n");
	}
	for (int i=0;i<n;i++)
	printf("\n%s tiene %d a¤os y pesa %.2f",c[i].nombre,c[i].edad,c[i].peso);
}
