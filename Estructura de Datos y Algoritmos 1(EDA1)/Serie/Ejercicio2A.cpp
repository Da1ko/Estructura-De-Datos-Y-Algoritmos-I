#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct nodo{
	int dato;
	nodo *siguiente;
	nodo *anterior;
};

nodo *primero=NULL;
nodo *ultimo=NULL;
void insertarNodo();
void mostrarLista();
int main(){
	int op;
	do{
		printf("Elige una opcion:\n");
		printf("1.-Insertar datos aleatorios\n");
		printf("2.-Mostrar\n");
		printf("3.-Salir\n");
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
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<3);
}

void insertarNodo(){
	srand(time(NULL));
	for (int x=1;x<=100;x++){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	nuevo->dato=rand()%10+11;
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
	}
	printf("\nDatos ingresados correctamente\n\a");
}

void mostrarLista(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(actual!=NULL){
		do{
			printf("%d\t",actual->dato);
			actual=actual->siguiente;
		}while(actual!=primero);
		printf("\n");
	}
	else{
		printf("La lista esta vacia\n");
	}
}
