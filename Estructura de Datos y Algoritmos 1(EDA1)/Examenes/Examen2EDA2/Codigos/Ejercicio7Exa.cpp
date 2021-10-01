//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void qs(int arr[],int i,int j);
float suma=0.0;
int n=10;
int main(){
	int i,j;
	int op,b=0;
	do{
		printf("\n== Seleccione una opcion == ");
		printf("\n1.Ingresar calificaciones");
		printf("\n2.Obtener promedio");
		printf("\n3.Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				int *arr;
				arr=(int *)malloc(n*sizeof(int));
				srand(time(NULL));
				for (i=0;i<n;i++){
					arr[i]=rand()%11;
				}
				printf("Calificaciones recibidas con exito!!!!\n\a");
				system("pause");
				system("cls");
			break;
			case 2:
				printf("\nLas calificaciones son:\n");
				qs(arr,0,i);
				printf("\n");
				for (i=0;i<n;i++){
					printf("[%d]\t",arr[i]);
					suma=suma+arr[i];
				}
				float promedio;
				suma = suma/n;
				printf("\n");
				printf("\n");
				printf("\t  ----------------------");
				printf("\n\t|| El promedio es = %.2f||\n\a",suma);
				printf("\t  ----------------------");
				printf("\n");
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 3:
				b=1;
			break;
		}
	}while(b==0);
}
void qs(int arr[],int i,int j){
	
	int inicio=i,fin=j,pibote,temp;
	pibote=arr[i];//arreglo con pibote, ultimo elemento es el pibote
	do{
		while(arr[i]>pibote)//elementos menores al pibote
		i=i+1;
		while(arr[j]<pibote)
		j=j-1;
		if(i<=j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i=i+1;
			j=j-1;
		}	
	}while(i<=j);
	if(inicio<j)
		qs(arr,inicio,j);
		if(i<fin)
		qs(arr,i,fin);
}
