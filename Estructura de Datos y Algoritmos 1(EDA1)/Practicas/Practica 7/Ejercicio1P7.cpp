#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int id,edad;
	float altura;
	char nombre[20],correo[30];
	nodo *siguiente;
	nodo *anterior;
};
nodo* primero=NULL;
nodo* ultimo=NULL;

void insertar();
void mostrar();
int main(){
	int op;
	do{
		printf("|||= BIENVENIDO AL SISTEMA FI =|||\n");
		printf("\nSeleccione una opcion:\n");
		printf("\n\t1.-[INGRESAR DATOS PERSONALES]\n");
		printf("\t2.-[MOSTRAR REGISTROS]\n");
		printf("\t3.-[SALIR DEL SISTEMA]\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertar();
				system("pause");
				system("cls");
			break;
			case 2:
				mostrar();
				system("pause");
				system("cls");
			break;
			case 3:
				printf("\nGracias!!! vuelva pronto\n");
			break;
		}
	}while(op<3);
}

void insertar(){
	nodo *nuevo=(nodo *)malloc(sizeof(nodo));
	printf("Ingresa su id:\n");
	scanf("%d",&nuevo->id);
	printf("Ingresa su nombre:\n");
	for(int i=0;i<1;i++){
		scanf("%s",&nuevo->nombre[i]);
	}
	printf("Ingresa su edad:\n");
	scanf("%d",&nuevo->edad);
	printf("Ingresa su altura(metros):\n");
	scanf("%f",&nuevo->altura);
	printf("Ingresa su correo electronico:\n");
	for(int i=0;i<1;i++){
		scanf("%s",&nuevo->correo[i]);
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
	printf("\nRegistro completado\n\a");
}

void mostrar(){
	nodo *actual=(nodo*)malloc(sizeof(nodo));
	actual=primero;
	if(actual!=NULL){
		do{
			printf("Nombre: %s\nId: %d\nEdad: %d\nAltura: %.2f[m]\nCorreo electronico: %s\n",actual->nombre,actual->id,actual->edad,actual->altura,actual->correo);
			actual=actual->siguiente;
		}while(actual!=primero);
		printf("\n");
	}
	else{
		printf("No hay datos para mostrar\n");
	}
}
