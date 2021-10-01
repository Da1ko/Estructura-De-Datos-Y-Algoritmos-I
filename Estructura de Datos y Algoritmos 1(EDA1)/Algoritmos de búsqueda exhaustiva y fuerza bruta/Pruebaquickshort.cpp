//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float t1,t0;
void qs(int arr[],int i,int j);
int main(){
	int n,i,j;
	char x;
printf("De que tamaño quieres el arreglo?\n");
scanf("%i",&n);

int *arr;

arr=(int *)malloc(n*sizeof(int));
	srand(time(NULL));
	for (i=0;i<n;i++){
		arr[i]=rand()%10+1;
		printf(" %i",arr[i]);
	}
	qs(arr,0,i);
	printf("\n");
	for (i=0;i<n;i++){
		printf(" %i",arr[i]);
	}
	printf("Los numeros se ordenaron en: %f [s]\n",(t1-t0)/CLOCKS_PER_SEC);
}
t0=clock();
void qs(int arr[],int i,int j){
	int inicio=i,fin=j,pibote,temp;
	pibote=arr[i];//arreglo con pibote, ultimo elemento es el pibote
	do{
		while(arr[i]<pibote)//elementos menores al pibote
		i=i+1;
		while(arr[j]>pibote)
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
t1=clock();

