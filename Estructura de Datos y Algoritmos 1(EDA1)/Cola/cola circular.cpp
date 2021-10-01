#include<stdio.h>
#include<stdlib.h>
//ingresar datos - push
//Eliminar datos - pop
main(){
	
	int *A,op,dato,i=-1,rep=1,n,op2;
	A=(int*)malloc(5*sizeof(int));
	
	do{
	printf("Que deseas realizar:\n ");
	printf("1. ingresar datos\n");
	printf("2. eliminar datos\n");
	printf("3. mostrar un elemento\n");
	scanf("%d",&op);
	
	switch(op){
		case 1: 
			i++;
			printf("Que dato deseas ingresar");
			scanf("%d",&dato);
			A[i]=dato;
			for(int j=0;j<=i;j++)
			printf("||%d||",A[j]);
			break;
case 2:
			for(int j=0;j<i;j++)
			A[j]=A[j+1];
			i--;
			for(int j=0;j<=i;j++)
			printf("|%d|",A[j]);
			break;
		case 3:
			printf("Que elemento deseas mostrar: \n");
			scanf("%d",&n);
			printf("El valor es: %d",A[n]);
			do{
			printf("Deseas ver el siguiente?");
			printf("1. Si 2. No");
			scanf("%d",&op2);
				if(n==i)
				n=-1;
			if(op2==1)
			printf("El valor es: %d",A[++n]);
			}while(op2==1);
			}
	printf("Deseas otra operación: ");
	printf("1. SI 2. No");
	scanf("%d",&rep);
}while(rep==1);
}

