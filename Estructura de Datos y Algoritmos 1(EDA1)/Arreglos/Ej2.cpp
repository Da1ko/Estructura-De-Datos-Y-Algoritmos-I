#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int filas,columnas,buscar,contar=0,temporal,l=0;
	srand(time(NULL));//cada que se abre el programa se generan nuevos numeros
	
	printf("Cuantas columnas quieres? ");
	scanf("%d",&columnas);
	printf("Cuantas filas quieres? ");
	scanf("%d",&filas);
	
	int array[filas][columnas], A[filas*columnas];
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			array[i][j]=10+rand()%11;//suma al valor aleatorio 10 unidades en el rango de 10 a 20
			
		}
	}
	
	printf("El arreglo capturado es:\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}
	printf("Que valor desea buscar?\n");
	scanf("%d",&buscar);
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		if(buscar==array[i][j]){
			printf("El elemento %d se encuentra en la posicion [%d] [%d]\n",buscar,i,j);
			contar++;
			}
		}
	}
	printf("\n Se encontro %d veces",contar);
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			A[l]=array[i][j];
			l++;
		}
	}
	for(int i=1;i<l;i++){
		for(int j=0;j<l;j++){
			if(A[j]>A[j+1])
			{
				temporal = A[j];
				A[j]=A[j+1];
				A[j+1]=temporal;				
			}
		}
	}
	l=0;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			A[l]=array[i][j];
			l++;
		}
	}
	for(int i=1;i<l;i++){
		for(int j=0;j<l;j++){
			if(A[j]>A[j+1])
			{
				temporal = A[j];
				A[j]=A[j+1];
				array[i+1][j]=temporal;				
			}
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
				printf(" %d ", array[i][j]);
			}
			printf("\n");
	}
	return 0;
}


