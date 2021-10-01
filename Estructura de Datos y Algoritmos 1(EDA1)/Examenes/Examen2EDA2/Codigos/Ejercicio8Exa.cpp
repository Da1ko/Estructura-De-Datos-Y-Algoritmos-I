#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	nodo *siguiente;
	nodo *anterior;
};

nodo *primero=NULL;
nodo *ultimo=NULL;
void insertarNodo();
void buscarNodo();
void eliminarNodo();
void mostrarLista();
int main(){
	int op;
	do{
		printf("\n\t============");
		printf("\tLISTA DOBLE LIGADA");
		printf("\t============\n");
		printf("\nEscoge una opcion:\n");
		printf("1.-Insertar\n");
		printf("2.-Buscar\n");
		printf("3.-Eliminar\n");
		printf("4.-Mostrar\n");
		printf("5.-Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertarNodo();
				system("pause");
				system("cls");
			break;
			case 2:
				buscarNodo();
				system("pause");
				system("cls");
			break;
			case 3:
				eliminarNodo();
				system("pause");
				system("cls");
			break;
			case 4:
				mostrarLista();
				system("pause");
				system("cls");
			break;
			case 5:
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<5);
}

void insertarNodo(){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
	printf("Ingrese el dato:\n");
	scanf("%d",&nuevo->dato);
	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=primero; //ligarse 
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
	printf("\nDato ingresado correctamente\a\n");
}

void buscarNodo(){
	int nodoBuscado,encontrado=0;
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	printf("Ingresa el dato a buscar:\n");
	scanf("%d",&nodoBuscado);
	if(primero!=NULL){
		do{
			if(actual->dato==nodoBuscado){
				printf("Se encuentra el dato\n");
				encontrado=1;
			}
			actual=actual->siguiente;
		}while(encontrado==0 && actual!=primero);
		if(encontrado==0){
			printf("No se encuentra el dato\n");
		}
	}
	else{
		printf("La lista se encuentra vacia\n");
	}
}

void eliminarNodo(){
	int nodoBuscado,encontrado=0;
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	nodo *ant=(nodo*)malloc(sizeof(nodo));
	ant=NULL;
	printf("Ingresa el dato a buscar:\n");
	scanf("%d",&nodoBuscado);
	if(primero!=NULL){
		do{
			if(actual->dato==nodoBuscado){
				printf("Se encuentra el dato\n");
				if(actual==primero){
					primero=primero->siguiente;
					primero->anterior=ultimo;
					ultimo->siguiente=primero;
				}
				else if(actual==ultimo){
					ultimo=ant;
					ultimo->siguiente=primero;
					primero->anterior=ultimo;
				}
				else{
					ant->siguiente=actual->siguiente;
					actual->siguiente->anterior=ant;
				}
				printf("Nodo eliminado\n");
				encontrado=1;
			}
			ant=actual;
			actual=actual->siguiente;
		}while(encontrado==0 && actual!=primero);
		if(encontrado==0){
			printf("No se encuentra el dato\n");
		}
		else{
			free(ant);
		}
	}
	else{
		printf("La lista se encuentra vacia\n");
	}	
}

void mostrarLista(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(actual!=NULL){
		do{
			printf("[%d]\t",actual->dato);
			actual=actual->siguiente;
		}while(actual!=primero);
		printf("\n");
	}
	else{
		printf("La lista esta vacia\n");
	}
}

