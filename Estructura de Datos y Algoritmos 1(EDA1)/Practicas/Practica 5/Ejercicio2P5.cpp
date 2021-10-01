#include <stdio.h>
#include <stdlib.h>

int main(){
	int *cola,op,i,j,n=50,pila[50],x;
	cola=(int*)malloc(n*sizeof(int));
	do{
	printf("\nQue opcion desea realizar:");
	printf("\n1.- Ingresar numero");
	printf("\n2.- Pares en la pila");	
	printf("\n3.- Impares en cola");	
	printf("\n4.- Salir\n");	
	scanf("%d",&op);
	switch(op){
		case 1:
				printf("Ingrese el numero: \n");
				scanf("%i",&x);
		break;
		case 2:				
		if(x%2==0){
    				pila[i]=x;
    				printf("[%d] ",pila[i]);
    				i++;
				}			
  		system("pause");
		break;
		case 3:
		if(x%2==1){
			cola[j]=x;
		    printf("[%d] ",cola[j]);
			j++;
		}
		system("pause");
		break;
		case 4:
			printf("Hasta pronto!!!\n");
			system("pause");	
		break;
	}
	system("cls");
	}while(op<4);
}
