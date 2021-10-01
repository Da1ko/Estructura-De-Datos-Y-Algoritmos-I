#include<stdio.h>

int factorialNumero(int n)
{
    if (n > 1)
    {
        return n * factorialNumero(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
	int j;
    printf("Recursividad para obtener el Factorial.\n\n");
	printf("Ingrese el numero al cual se le obtendra su factorial:\n");
	scanf("%d",&j);
    int resultado = factorialNumero(j);
    printf("\nEl resultado es: %d \n\n", resultado);

}

