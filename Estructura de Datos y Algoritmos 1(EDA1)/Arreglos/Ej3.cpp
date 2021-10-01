#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	int filas,columnas,buscar,contar=0; 
	int temporal,l=0;
	srand(time(NULL)); //cada vez que se ejecuta el programa genera numeros aleatorios distintos
	
	printf("Cuantas columnas tendra tu arreglo? ");scanf("%d",&columnas);
 	printf("Cuantas filas tendra tu arreglo? ");scanf("%d",&filas);
 	
 	int array [filas][columnas],A[filas*columnas];
 	
 	for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 			array[i][j]=10+rand()%11;//suma el valor aleatorio 10 unidades para hacer un rango de 10 a 20
		 }
	 }
	 
	 printf("El arreglo que capturaste es :\n");
	 for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 			printf(" %d ",array[i][j]);
}
printf("\n");
}

printf("Que valor deseas buscar:  ");scanf("%d",&buscar);
 for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
		 if(buscar==array[i][j]){
		 	printf("El elemento %d se encuentra en la posicion %d %d\n",buscar,i,j);
		 	contar++;
		 }
	}
}
printf("Se encontrro %d veces\n",contar);

 
 	for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 			A[l]=array[i][j];
 			l++;
 		}
 	}


 for(int i=1;i<l-1;i++){
 		for(int j=0;j<l-1;j++){
 			if(A[j]>A[j+1]){
 			temporal=A[j];
 			A[j]=A[j+1];
 			A[j+1]=temporal;
 		}
	}
}
l=0;
	for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 		array[i][j]=A[l];
 			l++;
 		}
 	}
 
 
 	for(int i=0;i<filas;i++){
 		for(int j=0;j<columnas;j++){
 			printf(" %d ",array[i][j]);
}
printf("\n");
}
 				
 				
}
