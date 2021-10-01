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
	do{
		printf("%cQu%c operacion deseas realizar?\n", 168,130 );
		printf("1.- Insertar dato\n");
		printf("2.- Mostrar datos cola\n");
		printf("3.- Mostrar datos pila\n");
		printf("4.- Mostrar datos de ambas\n");
		printf("5.- Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				pushp();	
			break;
 			case 2:mostrcol();
 			system ("pause");
			system ("cls");
			break;
			case 3:mostrpil();
			system ("pause");
			system ("cls");
			break;
			case 4:
			printf("\nDatos pila:\n");
			mostrpil();
			printf("\n");
			printf("\nDatos cola:\n");
			mostrcol();
			system ("pause");
			system ("cls");
			break;
			case 5:
			printf("\n Hasta luego");
			break;
			default: 
			printf("opci%cn, no es valida\n", 162);
			break;
		}
	}while(op<5);
}

void mostrpil(){
	nodo *indice = pila;
	if(indice==NULL){
    	printf("La pila esta vacia");
	}
	else{
		while(indice!=NULL){
			printf("[%d]\t",indice->dato);
			indice = indice->siguiente;
		}
	}
	printf("\n");
}
void mostrcol(){
    nodo *indice=inicio;
    if(indice==NULL){
    	printf("La cola esta vacia");
	}
	else{
		while(indice!=NULL){
			printf("[%d]\t",indice->dato);
			indice=indice->siguiente;
		}
	}
	printf("\n");
}
void pushp(){ 
	int x,n;
	printf("Escriba el numero de datos que va a ingresar\n");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	printf("\nIngrese el dato %d:\n",i);
	scanf("%d",&x);
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
	system ("pause");
	system ("cls");			
}

