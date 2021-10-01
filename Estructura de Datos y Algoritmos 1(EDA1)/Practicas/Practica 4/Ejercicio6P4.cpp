#include <stdio.h>
#include <stdlib.h>


int main(){
	int n,k,*array;
	array=(int*)malloc(n*sizeof(int));
	printf("Ingrese el tamaño del arreglo: \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("Ingrese el dato del arreglo A[%d]: \n",i);
		scanf("%d",&array[i]);
	}
	printf("Cuantos valores quieres recorrer?\n");
	scanf("%d",&k);
	printf("El arreglo recorrido es:\n");

	for(int i=k+1;i<=n;i++){
		printf("%d\t",array[i]);
		
	}
	for(int i=1;i<=k;i++){
		printf("%d",array[i]);
	}
}



