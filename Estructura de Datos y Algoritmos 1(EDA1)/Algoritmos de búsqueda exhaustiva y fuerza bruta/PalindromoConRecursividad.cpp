#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int espalindromo(char* cadena);
int main(){
	char cad[30];
	FILE *ap=fopen("palindromo.txt","r");//accediendo a un archivo de texto
	while(feof(ap)==NULL){
	
	fgets(cad,100,ap);//leyendo cadena del archivo
	if(espalindromo(cad)){
		printf("Si es palindromo\n");
	}else{
		printf("No es palindromo\n");
	}
}
	
}
int espalindromo(char *cadena){
	int j=0,i;
	if(strlen(cadena)==1){
		return 1;
	}
	
	if(cadena[0]==cadena[strlen(cadena)-2]){
		for(i=0;i<strlen(cadena)-1;i++){
			cadena[i]=cadena[i+1];
			j=1;
		}
			for(i=j;i<strlen(cadena)-1;i++){
				cadena[i]=NULL;
				
			}
		espalindromo(cadena);	 
	}else{
		return 0;
	}
}


