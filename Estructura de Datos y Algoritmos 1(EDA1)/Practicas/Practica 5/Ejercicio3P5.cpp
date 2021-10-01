#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *pila;//Variable de tipo estructura nodo, llamada pila
nodo *cola;
void insertar();
void imprimir();
main(){
	int op;
	do{
		printf("Que operacion desea realizar?\n")	;	
		printf("1.-Insertar dato a pila\n");
		printf("2.-Imprimir datos de la cola\n");
		printf("3.-Salir\n");
		
		scanf("%d",&op);
		switch(op)
		{
			case 1: insertar();	system("cls"); break;
			case 2: imprimir();system("cls"); break;
			case 3: printf("\nAdios vuelva pronto\n");break;
			default: printf("\nOPCION NO VALIDA\n");
		}
	}while(op<3);
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

void imprimir(){
    
	nodo *cola=pila;
	if(pila==NULL){
	 printf("No ha ingresado nada en la pila, por consiguiente la cola esta vacia.\n");
	 
	 }
	else{
		while(cola!=NULL){
			printf("[%d] ",cola->dato);//imprime datos
	   		cola=cola->siguiente;//avance en elementos
		}
	}
	printf("\n");
	system("pause");
}



