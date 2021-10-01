#include<stdio.h>

main(){
	int x,j,k;
	printf("Cual es el tamaño de los arreglos?");
	scanf("%d",&x);
	int arre[x],arre2[x],arre3[x+x];
	
	printf("Dame los elementos del arreglo 1\n");
	for(int i=0;i<x;i++){
	printf("Dame el elemento %d: ",i);
	scanf("%d",(arre+i));
	}
	
	printf("\nDame los elementos del arreglo 2");
	for(int i=0;i<x;i++){
	printf("Dame el elemento %d\n",i);
	scanf("%d",(arre2+i));
	}
	j=0;
	k=0;
	for(int i=0;i<x+x;i++){
		if(i%2==0 || i==0){
			(arre3+i)=(arre+j);
			j++;
		}
		else{
			(arre3+i)=(arre2+k);
			k++;
		}
	}
	printf("Los valores de arre3 son: ");
	for(int i=0;i<x+x;i++){
	printf("%d\n",*(arre3+i));	
	}
}
