#include <stdio.h>
#include <stdlib.h>
struct nodo{
	int a,b;
	nodo *nuevo;
	};
main()
{
	nodo *nnodo;
    nnodo=(nodo*)malloc(sizeof(nodo));
	printf("Dame el primer numero entero");
	scanf("%d",nnodo->a);
	printf("Dame el segundo numero entero");
	scanf("%d",nnodo->b);
	printf("Dame los elementos a de NNodo");
	scanf("%d",nnodo->nuevo->a);
	system("PAUSE");
}

