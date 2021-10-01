#include <stdio.h>
#include <stdlib.h>

struct usuario{
	char nombre[30];
	int nip;
	double saldo;
};

usuario *u=(usuario*)malloc(sizeof(usuario));
void consultar(usuario *u);
void retirar(usuario *u);
void depositar(usuario *u);
void salir(void);
main (){
	
	int intentos=3,nip2=0,b=1,op2;
	
	u->nip=524;
	u->saldo=5000;
	printf ("Ingresar su nombre:\n");
	fflush(stdin);
	gets (u->nombre);
	printf("Ingresa tu nip:\n");
	scanf("%i",&nip2);
	
	while((nip2!=u->nip)&&(intentos>0)) {
		intentos --;
		printf("ingresa tu nip:\n");
		scanf("%i",&nip2);
	}
		if(nip2==u->nip){
			printf("Bienvenido al sistema %s",u->nombre);
	
	do{		
	printf("\nQue opcion deseas realizar\n");
	printf("1.- Consultar saldo\n");
	printf("2.- Retirar\n");
	printf("3.- Depositar\n");
	printf("4.- Salir\n");
	int op;
	scanf("%i",&op);
	switch (op){
		case 1: 
			consultar(u);
			break;
		case 2: 
			retirar (u);
			break;
		case 3:
			depositar(u);
			break;
		case 4:
			salir ();
			break;
		default: break;
	}
	
	printf("\nDesea realizar otra operacion?\n1.- Si\n2.- No");
	scanf("%d",&op2);
	}
	while(op2==1);
}
			else{

				printf("Tu nip es incorrecto");
		}
	
	}
	
void consultar(usuario *u){
	printf("Hola %s, tu saldo es: \n%lf",u->nombre, u->saldo);
}

void retirar(usuario *u){
	double cantr;
	
	printf("Que cantidad desea retirar?");
	scanf("%lf",&cantr);
	
	if(u->saldo >= cantr){
		
	u->saldo = u->saldo - cantr;
	printf("Tu nuevo saldo es:\n%lf",u->saldo);	
	}
	else
	printf("Fondos insuficientes");

}

void depositar(usuario *u){
	double cantd;
	
	printf("Que cantidad desea depositar?");
	scanf("%lf",&cantd);
	u->saldo = u->saldo + cantd;
	printf("Tu nuevo saldo es:\n%lf",u->saldo);
}

void salir(void){
	printf("Hasta luego, gracias por usar BancoFI");
}
