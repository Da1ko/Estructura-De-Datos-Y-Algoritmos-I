#include <stdio.h>
#include <stdlib.h>

struct nodo{
	char nombre[50];
	nodo *siguiente;
	nodo *anterior;
};

nodo *primero=NULL;
nodo *ultimo=NULL;
void insertarNodo();
void mostrarLista();
void mostrarListaAR();
int main(){
	int op;
	do{
		printf("Elige una opcion:\n");
		printf("1.-Insertar nombre\n");
		printf("2.-Mostrar nombre(s)\n");
		printf("3.-Mostrar ultimo como primero\n");
		printf("4.-Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertarNodo();
				system("pause");
				system("cls");
			break;
			case 2:
				mostrarLista();
				system("pause");
				system("cls");
			break;
			case 3:
				mostrarListaAR();
				system("pause");
				system("cls");
			break;
			case 4:
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<4);
}

void insertarNodo(){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	printf("Ingrese el nombre:\n");
	for(int i=0;i<=0;i++){
		scanf("%s",&nuevo->nombre);
	}
	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=primero; 
		ultimo=primero;
		primero->anterior=ultimo;
	}
	else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=primero;
		nuevo->anterior=ultimo;
		ultimo=nuevo;
		primero->anterior=ultimo;
	}
	printf("\nDato ingresado correctamente\n");
}

void mostrarLista(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(actual!=NULL){
		do{
			printf("[%s]\t",actual->nombre);
			actual=actual->siguiente;
		}while(actual!=primero);
		printf("\n");
	}
	else{
		printf("La lista esta vacia\n");
	}
}

void mostrarListaAR(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=ultimo;
	if(actual!=NULL){
		do{
			printf("[%s]\t",actual->nombre);
			actual=actual->anterior;
		}while(actual!=ultimo);
		printf("\n");
	}
	else{
		printf("La lista esta vacia\n");
	}
}
