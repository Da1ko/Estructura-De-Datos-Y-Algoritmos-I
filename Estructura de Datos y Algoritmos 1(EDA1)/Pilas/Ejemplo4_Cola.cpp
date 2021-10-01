#include <stdio.h>
#include <stdlib.h>

int main(){
	int *cola,op,i=-1,dato,x,n;
	printf("De que tamaño quiere la cola?\n");
	scanf("%d",&n);
	cola=(int*)malloc(n*sizeof(int));
	do{
	printf("Que opcion desea realizar:");
	printf("\n1.- Ingresar datos");	
	printf("\n2.- Eliminar datos");	
	printf("\n3.- Mostrar la cola");	
	printf("\n4.- Mostrar un elemento de la cola");	
	printf("\n5.- Salir\n");	
	scanf("%d",&op);
	switch(op){
		case 1:
			i++;
			printf("\nIngrese el valor:");
			scanf("%d",&dato);	
			cola[i]=dato;
		break;
		case 2:
			if(i<0){
				printf("No existen datos por borrar\n");
			}
			else{
			for(int j=0;j<=i;j++){
				cola[j]=cola[j+1];
			}
			i--;
			}
		system("pause");
		break;
		case 3:
			for(int j=0;j<=i;j++){
				printf("%d\t",cola[j]);
		}
		system("pause");
		break;
		case 4:
			printf("Ingrese el elemento a mostrar: \n");
			scanf("%d",&x);
			printf("\nEl valor solicitado es: \n%d\n",cola[x-1]);
			system("pause");
		break;
		case 5:
			printf("Hasta pronto!!!\n");
			system("pause");	
		break;
	}
	system("cls");
	}while(op<5);
}
