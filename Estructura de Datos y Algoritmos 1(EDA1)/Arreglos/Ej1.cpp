#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int filas,columnas;
	srand(time(NULL));//cada que se abre el programa se generan nuevos numeros
	
	printf("Cuantas columnas quieres? ");
	scanf("%d",&columnas);
	printf("Cuantas filas quieres? ");
	scanf("%d",&filas);
	
	int array[filas][columnas];
	
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
}


