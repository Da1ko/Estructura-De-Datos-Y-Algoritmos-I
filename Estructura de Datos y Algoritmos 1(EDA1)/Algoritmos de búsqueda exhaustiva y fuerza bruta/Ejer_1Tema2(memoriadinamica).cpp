//Arreglo de un tamaño mil aleatorio entre 1 y 10 metodo burbuja
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n;
	printf("Cuantos datos requiere?\n");
	scanf("%d",&n);
	float t0,t1;
	char x;
	int *arre;
	arre =(int *)malloc(n*sizeof(int));
	srand(time(NULL));
	for(int i=0;i<n;i++){
		arre[i]=rand()%10+1;
		printf(" %d ",arre[i]);
	}
	printf("\n");
	printf("Presiona cualquier tecla para ordenar\n");
	x=getchar();
	t0=clock();
	for(int i;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arre[i]>arre[j]){
				int temp=arre[i];
				arre[i]=arre[j];
				arre[j]=temp;
			}
		}
	}
	t1=clock();
	printf("Presione cualquier tecla para mostrar los datos ordenados\n");
	x=getchar();
	for(int i=0;i<n;i++){
		printf(" %d ",arre[i]);
	}
	printf("\nLos numeros se ordenaron en: %f [s]\n",(t1-t0)/CLOCKS_PER_SEC);	
	free(arre);
}
