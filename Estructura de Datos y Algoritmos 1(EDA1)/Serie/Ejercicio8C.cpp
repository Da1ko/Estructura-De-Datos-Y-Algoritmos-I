#include <stdio.h>

int potencia(int b, int e){
	if(e>1){
		return b*potencia(b,e-1);
	}
	else{
		return b;
	}
}

int main(){
	int x,p;
	printf("Ingrese el numero:\n");
	scanf("%d",&x);
	printf("Ingrese la potencia:\n");
	scanf("%d",&p);
	int resultado = potencia(x,p);
	printf("El resultado es: %d\n",resultado);
	return 1;
}
