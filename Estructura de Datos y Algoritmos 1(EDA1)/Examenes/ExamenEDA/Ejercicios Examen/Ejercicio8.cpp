#include <stdio.h>
#include <stdlib.h>

struct nodo{
int dato;
 nodo *siguiente;
};
nodo *fin=NULL;
nodo *pila;
nodo *inicio=NULL;
void pushp();
void mostrcol();
void mostrpil();
main(){
	int op, op1;
	pushp();
	do{
		printf("%cQu%c operacion deseas realizar?\n", 168,130 );
		printf("1.-Mostrar cola\n");
		printf("2.-Mostrar pila\n");
		printf("3.-Mostrar ambas\n");
		printf("4.-Salir\n");
		scanf("%d",&op);
		switch(op){
 			case 1:mostrcol();
 			system ("pause");
			system ("cls");
			break;
			case 2:mostrpil();
			system ("pause");
			system ("cls");
			break;
			case 3:
			printf("\nLos datos ingresados de la pila son:\n");
			mostrpil();
			printf("\n");
			printf("\nLos datos ingresados de la cola son:\n");
			mostrcol();
			system ("pause");
			system ("cls");
			break;
			case 4:
			printf("\nVuelva pronto");
			break;
			default: 
			printf("lamento informarte que esa opci%cn, no es valida\n", 162);
			break;
		}
	}while(op<4);
}

void mostrpil(){
	nodo *indice = pila;
	while(indice!=NULL){
		printf("[%d]\t",indice->dato);
		indice = indice->siguiente;
	}
	printf("\n");
}
void mostrcol(){
    nodo *indice=inicio;
	while(indice!=NULL){
		printf("[%d]\t",indice->dato);
		indice=indice->siguiente;
	}
	printf("\n");
}
void pushp(){ 
	int x;
	for (x=1;x<=100;x++){
	if(x%2==0 || x==0){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	nuevo->siguiente=pila;
	nuevo->dato=x;
	pila = nuevo;
	}
	else{
	nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	nuevo->dato = x;
	nuevo->siguiente = NULL;
	if(inicio==NULL){
	inicio=nuevo;
	fin=nuevo;
	}
	else{
	fin->siguiente=nuevo;
	fin=nuevo;
	}
	}
}	
}

