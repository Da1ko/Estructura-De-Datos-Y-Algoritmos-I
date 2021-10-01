#include <stdio.h>
#include <ctype.h>


int contarVocales(char *cadena);

int main(int argc, char const *argv[])
{

	char entrada[1000];
	printf("Escribe una frase:\n");
	gets(entrada);
	int vocales = contarVocales(entrada);
	printf("El numero de vocales que tiene tu frase es: %d\n", vocales);
	return 0;
}


int contarVocales(char *cadena){
	int vocales = 0;

	for (int indice = 0; cadena[indice] != '\0'; ++indice){

		char letraActual = tolower(cadena[indice]);


		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u'
			)
		{
			vocales++;
		}
	}
	return vocales;
}

