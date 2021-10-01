#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int edad;
	long long telefono;
	char nombre[50];
	nodo *siguiente;
};
nodo *pila;
void push();
void pop();
void imprimir(nodo *);
main(){
	int op;
	do{
		printf("====AGENDA====\n");
		printf("\nQue operacion desea realizar?\n")	;	
		printf("1.-Ingresar nuevo usuario\n");
		printf("2.-Eliminar usuario\n");
		printf("3.-Imprimir agenda\n");
		printf("4.-Salir\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: push();system("pause"); system("cls"); break;
			case 2: pop();system("pause"); system("cls");break;
			case 3: imprimir(pila);system("pause"); system("cls"); break;
			case 4: printf("\nAdios\n");break;
		}
	}while(op<4);
}

void push(){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	nuevo->siguiente=pila;
	printf("\nIngresa el nombre:\n");
	for(int i=0;i<1;i++){
		scanf("%s",&nuevo->nombre[i]);
	}
	printf("\nIngresa la edad:\n");
	scanf("%d",&nuevo->edad);
	printf("\nIngresa el telefono:\n");
	scanf("%lld",&nuevo->telefono);
	pila=nuevo;
}

void pop(){
	nodo *elim;
	int x;
	char y;
	if(pila==NULL){
		printf("\nLa pila se encuentra vacia, imposible eliminar\n");
	}
	else{
		x=pila->edad+pila->telefono;
		y=pila->nombre[50];
		elim=pila;
		pila=pila->siguiente;
		free(elim);
		printf("\n Se elimino al ultimo usuario\n\a");
	}
}

void imprimir(nodo *){
	nodo *indice=pila;
	while(indice!=NULL){
		printf("\nNombre:%s\tEdad: %d\t Telefono: %lld\n",indice->nombre,indice->edad,indice->telefono);
		indice= indice->siguiente;
		printf("\n");
	}
	printf("\n");
}
