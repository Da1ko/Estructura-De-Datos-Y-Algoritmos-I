#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
	
	int *cola,i=-1,dato,x,tam,op;
	printf("De que tamano deseas la cola?\n");
	scanf("%d",&tam);
	cola=(int*)malloc(tam*sizeof(int));
	
	do{
	printf("\nBuen dia, que accion desea realizar?\n");
	printf("1.- Ingresar datos de la cola\n");
	printf("2.- Eliminar el ultimo dato de la cola\n");
	printf("3.- Mostrar datos de la cola\n");
	printf("4.- Mostrar un elemento de la cola\n");
	printf("5.- Salir\n");
	scanf("%d",&op);
	

	switch(op){
		case 1:
			i++;
			printf("Que valor deseas ingresar?\n");
			scanf("%d",&dato);
			cola[i]=dato;
			break;
			
		case 2:
			if(i<0){
				printf("No existen datos en la cola");
			}
			else{
				for(int j=0;j<=i;j++){
					cola[j]=cola[j+1];
				}
				printf("");
				i--;
			}
			break;
			
		case 3:
			for(int j=0;j<=i;j++){
				printf("%d\n",cola[j]);
			}
			system("pause");
			break;
			
		case 4:
			printf("Que elemento deseas mostrar? Ingrese el indice del dato:\n");
			scanf("%d",&x);
			printf("El valor solicitado es:\n%d",cola[x-1]);
			system("pause");
			break;
			
		case 5:
			printf("Hasta luego :)");
			break;
	}
	system("cls");
}while(op<5);
	
}
