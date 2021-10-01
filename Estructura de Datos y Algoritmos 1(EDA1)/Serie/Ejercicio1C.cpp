#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *pila;
nodo *final=NULL;
nodo *inicial=NULL;
void insertar();
int elimp();
void imprimir();
main(){
	int op;
	do{
		printf("Que operacion desea realizar?\n")	;	
		printf("1.-Insertar dato a pila\n");
        printf("2.-Eliminar dato de la pila\n");
		printf("3.-Imprimir datos de la cola\n");
		printf("4.-Salir\n");
		
		scanf("%d",&op);
		switch(op)
		{
			case 1: insertar();	system("cls"); break;
			case 2:printf("\nSe elimino el dato %d de la pila\n" ,elimp());system("\npause");break;
			case 3: imprimir();system("cls"); break;
			case 4: printf("\nEsperamos haberle ayudado en compu Fi\n");break;
			default: printf("\nOPCION NO VALIDA\n");
		}
	}while(op<4);
}

void insertar(){
	nodo *nuevo=(nodo*)malloc(sizeof(nodo));//reservar espacio para un elemento de pila
	nuevo->siguiente=pila;
	printf("\nIngresa el nuevo dato: \n");
	scanf("%d",&nuevo->dato);
	pila=nuevo;//variable auxiliar para guardar a nuevo	
	printf("Dato ingresado de manera correcta\n\a");
	system("pause");
}

int elimp(){
	nodo *elim;
	int x;
	if(pila==NULL){
		printf("La pila esta vacia");
		return 0;
	}else{
		x = pila->dato;
		elim = pila;
		pila = pila->siguiente;
		free(elim);
		nodo *nuevo = (nodo*)malloc(sizeof(nodo));
	        nuevo->dato = x;
	        nuevo->siguiente = NULL;
			if(inicial==NULL){
			   inicial=nuevo;
			   final=nuevo;
	        }else{
				  final->siguiente=nuevo;
				  final=nuevo;
				  }
		return x;
	}
}
void imprimir(){   
	nodo *indice=inicial;
    if(inicial==NULL){
		printf("No hay datos de la cola");}
	else{
	while(indice!=NULL){
		printf("[%d]\t",indice->dato);
		indice=indice->siguiente;
	}}
	printf("\n");
	system("pause");
}
 

