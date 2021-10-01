#include <stdio.h>
#include <string.h>
int main()
{
	char Nombre[1][50];
	for(int i=0;i<1;i++)
	{
		printf("Ingrese su nombre: \n");
		fflush(stdin);
		gets(Nombre[i]);
	}
	for(int i=0;i<1;i++)
	printf("Tu nombre es: \n %s", Nombre[i]);
return 0;		
}
