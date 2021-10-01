#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int dado,sumad=0,op,*A,*A2,*At,i=-1,j;
	A=(int*)malloc(30*sizeof(int));
	A2=(int*)malloc(30*sizeof(int));
	At=(int*)malloc(30*sizeof(int));
	do{
		printf("Que deseas hacer?\n1.- Tirar dado\n2.- Salir del juego\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				i++;
				printf("Tiraste los dados con la esperanza de un numero alto\n");
				srand(time(NULL));		
				A[i]=1+rand()%6;
				A2[i]=1+rand()%6;
				printf("Dado1: %d\n",A[i]);
				printf("Dado2: %d\n",A2[i]);
				At[j]=A[i]+A2[i];
				printf("Te haz movido a la casilla %d\n",At[j]);
				system("pause");
				system("cls");
			break;
			case 2:
				printf("\nHasta la vista!!!\n");
			break;
			}
	}while(op<2);
}


