#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int id,edad;
	float altura;
	char nombre[50],correo[50];
	nodo *siguiente;
};
nodo *lista;
void insertar();
void mostrar(nodo *siguiente);
int main(){
	int op;
	do{
		printf("Elige una opcion:\n");
		printf("1.-Ingresar datos personales\n");
		printf("2.-Mostrar\n");
		printf("3.-Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertar();
				system("pause");
				system("cls");
			break;
			case 2:
				mostrar(lista);
				system("pause");
				system("cls");
			break;
			case 3:
				printf("\nVuelva pronto\n");
			break;
		}
	}while(op<3);
}

void insertar(){
	nodo *q=(nodo*)malloc(sizeof(nodo));
	q->siguiente=lista;	
	printf("Ingresa su id:\n");
	scanf("%d",&q->id);
	printf("Ingresa el nombre:\n");
	for(int i=0;i<1;i++){
		scanf("%s",&q->nombre[i]);
	}
	printf("Ingresa la edad:\n");
	scanf("%d",&q->edad);
	printf("Ingresa la altura(en metros):\n");
	scanf("%f",&q->altura);
	printf("Ingresa el correo electronico:\n");
	for(int i=0;i<1;i++){
		scanf("%s",&q->correo[i]);
	}
	lista=q;
}

void mostrar(nodo *siguiente){
	nodo *indice=lista;
	if(indice==NULL){
		printf("Lista vacia\n");
	}
	else{
		while(indice!=NULL){
				printf("Nombre: %s\nId: %d\nEdad: %d\nAltura: %.2f[m]\nCorreo electronico: %s\n",indice->nombre,indice->id,indice->edad,indice->altura,indice->correo);
				indice=indice->siguiente;	
				printf("\n");
		}
	}
}
