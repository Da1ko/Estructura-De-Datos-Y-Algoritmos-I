#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *ap;
	int n;
	printf("Cuantas letras tiene la palabra?\n");
	scanf("%d",&n);
	ap = (char*) malloc(n*sizeof(char));
	printf("\nIntroduzca su palabra (no exceda su numero de letras):\n ");
	fflush(stdin);
	gets(ap);
	printf("\nSu cadena es: %s\n",ap);
	system("pause");
}
