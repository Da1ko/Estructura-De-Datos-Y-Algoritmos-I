
#include <stdio.h>
#include <stdlib.h>
 struct nodo{
 	int dato;
 	nodo *siguiente;
 	
 };
 nodo *ini=NULL;
 nodo *fin=NULL;
 void push();
 int pop();
 void mostrar();
 main (){
 	int op;
	do{
	printf("Que opcion desea realizar?\n1.- Insertar\n2.-Eliminar\n3.-Mostrar\n4.-Salir\n");
	scanf("%i",&op);
	switch(op){
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		mostrar();
		break;
		case 4:
		printf("hasta la vista baybe\n");
		break;
		default:
		printf("opcion no valida\n");
		break;	
	}
} while(op!=4);
 }
 void push(){
 	nodo *nuevo=(nodo*)malloc(sizeof(nodo));
 	printf("Que valor deseas ingresar a la pila\n");
	scanf("%i",&nuevo->dato);
	nuevo->siguiente=NULL;
	if(ini==NULL){
		ini=nuevo;
		fin=nuevo;
	}
	else{
		fin->siguiente=nuevo;
		fin=nuevo;
	}
	
 }
 int pop(){
 	int valoreliminado;
 	if(ini!=NULL){
 	valoreliminado=ini->dato;
 	
 		nodo *aux=ini;
 		if(ini==fin){
 			ini=NULL;
 			fin=NULL;
		 }
		 else{
		 	ini=ini->siguiente;
		 }
		 free(aux);
		 return valoreliminado;
 	}
 	
 	else{
 		printf("no se puede remover nada ya que la pila esta vacia.\n");
 		return -1;
 	}
 }
 void mostrar(){
 	nodo *aux2=ini;
 	if(ini==NULL){
	 printf("La pila esta vacia.\n");
	 
	 }
	 else{
	 
 	while(aux2!=NULL ){
 	
 		printf("[%d]",aux2->dato);
 		aux2=aux2->siguiente;
 	}
 }
 }
