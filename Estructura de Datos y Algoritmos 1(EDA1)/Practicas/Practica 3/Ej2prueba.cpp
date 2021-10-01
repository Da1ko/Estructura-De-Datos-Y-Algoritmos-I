#include <stdio.h>
#include <stdlib.h>

struct complejo
{
	float r, i;
}*complejo1, *complejo2;

complejo sumar(complejo *a,complejo *b);
complejo restar(complejo *a, complejo *b);
complejo multiplicar(complejo *a, complejo *b);
complejo dividir(complejo *a, complejo *b);
void salir(void);
int main(){
	int op2;
	struct complejo complejo3;
	complejo1=(complejo*)malloc(sizeof(complejo));
	complejo2=(complejo*)malloc(sizeof(complejo));
			
	do{
		printf("\nDame la parte real del numero uno: ");
		scanf("%f", &complejo1->r);
		printf("\nDame la parte imaginaria del numero uno: ");
		scanf("%f", &complejo1->i);

		printf("\nDame la parte real del numero dos: ");
		scanf("%f", &complejo2->r);
		printf("\nDame la parte imaginaria del numero dos: ");
		scanf("%f", &complejo2->i);
		printf("\nCalculadora de complejos\n");
		printf("Que opcion deseas realizar:\n");
		printf("1.- Sumar\n");
		printf("2.- Restar\n");
		printf("3.- Multiplicar\n");
		printf("4.- Dividir\n");			
		printf("5.- Salir\n");
		int op;
		scanf("%i",&op);
		switch (op){
			case 1:
				complejo3 = sumar(complejo1,complejo2);
				if(complejo3.i<0)
					printf("\n\n%.3f %.3fi", complejo3.r, complejo3.i);
				else
					printf("\n\n%.3f + %.3fi", complejo3.r, complejo3.i);
			break;
			case 2:
				complejo3 = restar(complejo1,complejo2);
				if(complejo3.i<0)
					printf("\n\n%.3f %.3fi", complejo3.r, complejo3.i);
				else
					printf("\n\n%.3f + %.3fi", complejo3.r, complejo3.i);
			break;
			case 3:
				complejo3 = multiplicar(complejo1,complejo2);
				if(complejo3.i<0)
					printf("\n\n%.3f %.3fi", complejo3.r, complejo3.i);
				else
					printf("\n\n%.3f + %.3fi", complejo3.r, complejo3.i);
			break;
			case 4:
				complejo3 = dividir(complejo1,complejo2);
				if(complejo3.i<0)
					printf("\n\n%.3f %.3fi", complejo3.r, complejo3.i);
				else
					printf("\n\n%.3f + %.3fi", complejo3.r, complejo3.i);
			break;
			case 5:
				salir();
			break;
		default: break;
		}
	free(complejo1);
	free(complejo2);
	printf("\nDesea realizar otra operacion?\n1.- Si\n2.- No\n");
	scanf("%d",&op2);	
	system("cls");
	}while(op2==1);
}

complejo sumar(complejo *a, complejo *b)
{
	complejo resultado;
	resultado.r= a->r+b->r;
	resultado.i=a->i+b->i;
    return resultado;
}

complejo restar(complejo *a, complejo *b)
{
	complejo resultado2;
	resultado2.r= a->r-b->r;
	resultado2.i=a->i-b->i;
    return resultado2;
}

complejo multiplicar(complejo *a, complejo *b)
{
	complejo resultadoT;
	resultadoT.r= a->r*b->r+a->i*b->i*-1;
	resultadoT.i= a->r*b->i+a->i*b->r;
    return resultadoT;
}

complejo dividir(complejo *a, complejo *b)
{
	complejo resultado4;
	if(b->i>0)
	{
		resultado4.r=(a->r*b->r+a->i*b->i*-1) /(b->r*b->r + b->i*b->i) ;
		resultado4.i=(a->r*b->i+a->i*b->r)/(b->r*b->r + b->i*b->i);
	}
	else{
		resultado4.r=(a->r*b->r+a->i*b->i*-1) /(b->r*b->r - b->i*b->i) ;
		resultado4.i=(a->r*b->i+a->i*b->r)/(b->r*b->r - b->i*b->i);	
	}
    return resultado4;
}

void salir(void){
	printf("Hasta luego, gracias por usar la calculadora");
}


