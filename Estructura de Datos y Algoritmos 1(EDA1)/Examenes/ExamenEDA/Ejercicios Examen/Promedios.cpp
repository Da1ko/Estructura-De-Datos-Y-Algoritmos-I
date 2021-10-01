#include<stdio.h>
#include <stdlib.h>

struct listA{
	float dato;
	listA *siguiente;
};

listA *lista;
void insertar();
void promedioTotal(listA *siguiente);
int alum;
main(){
	int op,b=0;
	do{
		printf("\n== Seleccione una opcion == ");
		printf("\n1.Ingresar calificacion");
		printf("\n2.Promedio");
		printf("\n3.Salir\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				insertar();
				system("pause");
				system("cls");
			break;
			case 2:
				promedioTotal(lista);
				system("pause");
				system("cls");
			break;
			case 3:
				b=1;
			break;
		}
	}while(b==0);
	
	return 0;
}
void insertar(){
	printf("Cuantos alumnos va a promediar?\n");
	scanf("%d",&alum);
	for(int i=1;i<=alum;i++){
		listA *nuevo=(listA*)malloc(alum*sizeof(listA));
		nuevo->siguiente=lista;
		printf("\nIngresa la calificacion %d:  ",i);
		scanf("%f",&nuevo->dato);
		lista=nuevo;
	}
}

void promedioTotal(listA *siguiente){
	listA *indice=lista;
	float suma=0;
	int n=0;
	if(indice!=NULL){
		printf("\nLas calificaciones son:\n");
		while(indice!=NULL){
			suma=suma+indice->dato;
			printf("[%.2f]\t",indice->dato);
			indice=indice->siguiente;
			n++;
		}
		printf("\n");
		float promedio;
		promedio = suma/n;
		printf("\n");
		printf("\t  ----------------------");
		printf("\n\t|| El promedio es = %.2f||\n\a",promedio);
		printf("\t  ----------------------");
		printf("\n");
	}
	else{
		printf("\n	No hay datos en la lista\n");
	}
}
