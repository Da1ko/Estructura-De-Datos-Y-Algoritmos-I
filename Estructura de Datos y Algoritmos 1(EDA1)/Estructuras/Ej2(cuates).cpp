#include<stdio.h>
#include<stdlib.h>
struct cuates
{
	char nombre[20];
	int  edad;
	float peso;
}var1;
main()
{
	struct cuates cu1;
	printf("Dame el nombre del cuate 1: ");
	fflush(stdin);
	gets(cu1.nombre);
	printf("Dame la edad del cuate 1: ");
	scanf("%d",&cu1.edad);
	printf("Dame el peso del cuate 1: ");
	scanf("%f",&cu1.peso);
	printf("\n%s tiene %d a¤os y pesa %.2f\n",cu1.nombre,cu1.edad,cu1.peso);
	
	struct cuates cu2;
	printf("\nDame el nombre del cuate 2: ");
	fflush(stdin);
	gets(cu2.nombre);
	printf("Dame la edad del cuate 2: ");
	scanf("%d",&cu2.edad);
	printf("Dame el peso del cuate 2: ");
	scanf("%f",&cu2.peso);
	printf("\n%s tiene %d a¤os y pesa %.2f",cu2.nombre,cu2.edad,cu2.peso);
}
