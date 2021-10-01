#include <stdio.h>
#include <stdlib.h>

struct datos{
	int id;
	int valor;
};

struct cola{
	cola *anterior;
	cola *siguiente;
	datos*  D;
};

void insertar(void);
void eliminar(void);
void mostrar(void);
void salir(void);
int main(){
	int op;
	printf("Que opcion desea realizar:");
	printf("\n1.- Ingresar datos");	
	printf("\n2.- Eliminar datos");	
	printf("\n3.- Mostrar la cola");	
	printf("\n4.- Salir\n");	
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			insertar();
		break;
		case 2:
			eliminar();
		break;
		case 3:
			mostrar();
		break;
		case 4:
			salir();
		break;
	}
}

void insertar(){
	int x;
	cola *nuevo;
	printf("Ingrese el valor:\n");
	scanf("%d",&x);
	nuevo=(cola*)malloc(sizeof(cola));
}
