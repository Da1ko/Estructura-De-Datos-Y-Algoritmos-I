#include<stdio.h>
#include<stdlib.h>
void imprimir(char *n, int e, float p);
struct cuates
{
	char nombre[20];
	int  edad;
	float peso;
}var1;
void promedio(cuates *J);
	int n;
int main()
{
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
	imprimir(c[i].nombre,c[i].edad,c[i].peso);
	promedio(c);
}

void imprimir(char *n, int e, float p)
{
	printf("%s \n %d \n %f",n,e,p);
}

void promedio(cuates *J)
{
	float Suma=0;
	for (int i=0;i<n;i++)
	{
		Suma+= J[i].peso;
	}
	printf("\n El promedio de los pesos es: %.2f",Suma/n);
}
