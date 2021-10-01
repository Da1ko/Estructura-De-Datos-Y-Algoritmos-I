#include <stdio.h>
int cubo(int *x);//Funcion prototipo
int main(){
	int x;
	printf("Dime un numero y te devolvere el cubo\n");
	scanf("%d", &x);
	printf("El valor de x antes de la funcion es %d\n",x);
	printf("El cubo es %d\n", cubo(&x));
	printf("El valor de x despues de la funcion es %d\n",x);
}

int cubo(int *x){
	*x=*x**x**x;
	return *x;
	
}

