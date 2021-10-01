#include <stdio.h>//Este programa va a leer un arreglo de cadenas de caracteres 
#include <stdlib.h>

int main(){
	FILE *ap;
	ap=fopen("Cadenas.txt","w");
	char **cadenas;
	int n;
	printf("Cuantas cadenas tienes:\n");
	scanf("%d",&n);
	cadenas=(char**)malloc(n*(sizeof(char*)));
	for(int i=0;i<n;i++){
		cadenas[i]=(char*)malloc(100*sizeof(char));//reseva del tamaño de cadena
	}
	for(int i=0;i<n;i++){
		printf("Dame el contenido de la cadena: %d\n",i);
		fflush(stdin);
		gets(cadenas[i]);//captura cadena
		fprintf(ap,"%s\n",cadenas[i]);//imprimir en un archivo cadenas
	}
	fclose(ap);
}
