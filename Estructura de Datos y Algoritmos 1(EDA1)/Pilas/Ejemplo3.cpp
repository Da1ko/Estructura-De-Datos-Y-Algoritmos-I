#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *pila;//Variable de tipo estructura nodo, llamada pila
void push();
int pop();
void imprimir(nodo *);//recibir un apuntador de tipo nodo en este
main(){
	int op;
	do{
		printf("\nQue operacion desea realizar?\n")	;	
		printf("1.-Insertar\n");
		printf("2.-Eliminar\n");
		printf("3.-Imprimir\n");
		printf("4.-Salir\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: push(); break;
			case 2: printf("Se elimino: %d",pop());break;//pop eliminar
			case 3: imprimir(pila); break;
			case 4: printf("\nAdios\n");break;
		}
	}while(op<4);
}

void push(){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));//reservar espacio para un elemento de pila
	nuevo->siguiente=pila;
	printf("\nIngresa el nuevo dato:\n");
	scanf("%d",&nuevo->dato);
	pila=nuevo;//variable auxiliar para guardar a nuevo	
}

int pop(){
	nodo *elim;
	int x;
	if(pila==NULL){
		printf("\nLa pila se encuentra vacia, imposible eliminar\n");
		return 0;
	}
	else{
		x=pila->dato;
		elim=pila;
		pila=pila->siguiente;
		free(elim);//elimina el espacio de la memoria reservada
		return x;//indica el dato que borro 
	}
}

void imprimir(nodo *){
	nodo *indice=pila;
	while(indice!=NULL){
		printf("%d ",indice->dato);//imprime datos
		indice= indice->siguiente;//avance en elementos de la pila
	}
	printf("\n");
}
