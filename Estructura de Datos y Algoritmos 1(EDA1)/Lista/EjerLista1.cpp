#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *lista;
void insertar();
int eliminar();
void mostrar(nodo *siguiente);
int main(){
	int op;
	do{
		printf("Elige una opcion:\n");
		printf("1.-Insertar\n");
		printf("2.-Eliminar\n");
		printf("3.-Mostrar\n");
		printf("4.-Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertar();
			break;
			case 2:
				printf("\nSe elimino el dato %d",eliminar());
			break;
			case 3:
				mostrar(lista);
			break;
			case 4:
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<4);
}

void insertar(){
	nodo *q=(nodo*)malloc(sizeof(nodo));
	q->siguiente=lista;	
	printf("Ingresa el nuevo dato:\n");
	scanf("%d",&q->dato);
	lista=q;
}
int eliminar(){
	int nodobuscado=0,bandera=0;
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=lista;
	nodo *anterior=(nodo*)malloc(sizeof(nodo));
	anterior=NULL;//inicializando nodo para mover datos de la lista
	printf("\nIngrese el valor que desea eliminar:\n");
	scanf("%d",&nodobuscado);
	if(lista!=NULL){
		do{
			if(actual->dato==nodobuscado){
				bandera=1;
				if(actual==lista){
					lista==lista->siguiente;
				}
				else{
					anterior->siguiente=actual->siguiente;
				}
			}
			anterior=actual;
			actual=actual->siguiente;
		}while(actual!=NULL&&bandera==0);
	}
	if(bandera==1){
		free(anterior);
	}
	return nodobuscado;
}

void mostrar(nodo *siguiente){
	nodo *indice=lista;
	while(indice!=NULL){
			printf("El valor es %d.\n",indice->dato);
			indice=indice->siguiente;	
	}

}
