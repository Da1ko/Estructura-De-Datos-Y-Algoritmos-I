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
void eliminarNodo();
int main(){
	int op;
	do{
		printf("Elige una opcion:\n");
		printf("1.-Insertar datos aleatorios\n");
		printf("2.-Mostrar\n");
		printf("3.-Vaciar\n");
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
				eliminarNodo();
			break;
			case 4:
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<4);
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
	printf("\n");
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

void eliminarNodo(){
	int nodoBuscado,encontrado=0;
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	nodo *ant=(nodo*)malloc(sizeof(nodo));
	ant=NULL;
	nodo *final=(nodo*)malloc(sizeof(nodo));
	final=ultimo;
	if(primero!=NULL&&final!=NULL){
		if(actual->dato > final->dato){
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
				ant=actual;
				actual=actual->siguiente;
		}
		else{ 
			if(final==ultimo){
					ultimo=ultimo->anterior;
					ultimo->siguiente=primero;
					primero->anterior=ultimo;
				}
				else if(actual==ultimo){
					actual=ant;
					actual->anterior=ultimo;
					final->siguiente=primero;
				}
				else{
					ant->anterior=final->anterior;
					final->anterior->siguiente=ant;
				}
				printf("Nodo eliminado\n");
				encontrado=1;
				ant=final;
				final=final->anterior;	
		}
		if(encontrado==0){
			printf("Son iguales\n");
			printf("%d\n",primero->dato);
			printf("%d\n",ultimo->dato);
		}
		else{
			free(ant);
		}
	}
	else{
		printf("La lista se encuentra vacia\n");
	}	
}

