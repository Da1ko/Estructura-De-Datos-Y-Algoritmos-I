//ELABORAR UN PROGRAMA QUE PERMITA BUSCAR UN NUMERO DENTRO DE UN ARREGLO BIDIMENSIONAL CON DOS OPCIONES
//OPCION 1 SERA SIN MEMORIA DINAMICA
//OPCION 2 USANDO MEMORIA DINAMICA
// LA OPCION LA DETERMINA EL USUARIO
#include <stdio.h>
#include <stdlib.h>

int main() {
int n,m,op;
	
	printf ("Ingresa el numero de filas\n");
	scanf ("%d",&n);
	printf ("Ingresa el numero de columnas\n");
	scanf ("%d",&m);
	
int arre[n][m];
int **ap;

	do 
	{
	printf ("Que opcion deseas?\n");
	printf ("Memoria dinamica (1)\n");
	printf ("Sin memoria dinamica (2)\n");
	printf ("Salir (3)\n");
	scanf ("%d",&op);
	
	switch (op) {
		case 1: *ap =(int*)malloc (n*sizeof(int));
			for (int i=0;i<m;i++)
			ap[i]=(int*)malloc (n*sizeof(int));
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
			printf("Dame el elemento A[%d][%d]= ",i,j);
			scanf("%d",&ap[i][j]);
	}
		
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
			printf("\t%d",ap[i][j]);
			printf("\n");
	}

			break;
		case 2: 
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
			printf("Dame el elemento A[%d][%d]= ",i,j);
			scanf("%d",&ap[i][j]);
	}
		
			for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
			printf("\t%d",ap[i][j]);
			printf("\n");
	}
			break;
		case 3: 
			printf("Nos vemos\n");
			break;
	}
	
} while (op<3);
	return (0);
}
