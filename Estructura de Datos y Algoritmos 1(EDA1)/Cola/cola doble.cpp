#include<stdio.h>
#include<stdlib.h>
//ingresar datos - push
//Eliminar datos - pop
main(){

int *A,op,i=0;

A=(int*)malloc(5*sizeof(int));
do{

printf("\nQue deseas realizar \n");
printf("1. Insertar datos al inicio \n");
printf("2. Insertar datos al final \n");
printf("3. Eliminar datos al inicio \n");
printf("4. Eliminar datos al final \n");
printf("5. Imprimir la Cola  \n");
printf("6. Salir\n");
scanf("%d",&op);
	
	switch(op){
		
		case 1:
            if (i<=5){
			for(int j=i;j>=0;j--)
			A[j+1]=A[j];
            printf("Dame el dato: ");
			scanf("%d",&A[0]);
			i++;
            }else{
                printf("La cola esta llena, no se puede insertar\n");}
			break;
            
		case 2:
            if (i<=5){
			printf("Dame el dato: ");
			scanf("%d",&A[i]);
			i++;
            }else{
                printf("La cola esta llena, no se puede insertar\n");}
			break;
		
        case 3:
            if (i!=0){
			for(int j=0;j<i;j++)
			A[j]=A[j+1];
			i--;
            }else{
                printf("La cola esta vacía, no se puede eliminar\n");}
			break;

        case 4:
            if(i!=0){
			i--;
            }else{
                printf("La cola esta vacía, no se puede eliminar\n");}
			break;
		
        case 5:
			for(int j=0;j<i;j++)
			printf("|%d|",A[j]);
			break;
		default:printf("ADIOS\n");break;
		printf("\nDEseas realizar otra operación:  1. Si 2. No \n");
		scanf("%d",&op);
	}
	}while(op<6)	;
}
