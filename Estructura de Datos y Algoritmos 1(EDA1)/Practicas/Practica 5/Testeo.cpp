#include<stdio.h>
#include <stdlib.h>
void insertar();
void pasar();
void mostrar ();
int pila[10],i=0, *cola;

int main(){
	int op;
	cola=(int*)malloc(sizeof(int));
	do{
	printf("Que opcion desea realizar?\n1.- Insertar\n2.-Pasar datos a cola\n3.-Mostrar\n4.-Salir\n");
	scanf("%i",&op);
	switch(op){
		case 1:
		insertar();
		break;
		case 2:
		pasar();
		break;
		case 3:
		mostrar();
		break;
		case 4:
		printf("hasta la vista baybe\n");
		break;
		default:
		printf("opcion no valida\n");
		break;	
	}
} while(op!=4);
}

void insertar(){
	int x;
	printf("Que valor deseas ingresar a la pila\n");
	scanf("%i",&pila[i]);
	i++;
}
void pasar(){
	printf("El ultimo valor ingresado fue pasado\n");
	cola[i]=pila[i];
	i++;
	printf("[%d]\t",cola);
}
void mostrar(){
	int j;
	printf("los elementos de la pila son:\n");
	for(j=0;j<i;j++){
		printf("[%d]\t",pila[j]);
	}
	
}
void mostrar2(){
	int j;
	printf("los elementos de la pila son:\n");
	for(j=0;j<i;j++){
		printf("[%d]\t",pila[j]);
	}
	
}
