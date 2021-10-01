/* Borrar elementos en Arreglos - Por Solución Ingenieril*/
#include <stdio.h> /* Declaración librerías*/
#include <stdlib.h>
#include <string.h>

int main(){
	int contador,encontro,posicion,respuesta; //Variables de ciclos y banderas
	char nombre[6][10]; //Arreglo que guardara los nombres
	char nombre_borrar[10]; //Vector que guardara el nombre a borrar
	
	//Ciclo en el que solicitamos los nombres a ingresar
	for(contador=0;contador<6;contador++){
		printf("Ingresa un nombre: ");
		scanf("%s",&nombre[contador]);
	} 
	
	encontro = 0; //Inicializamos variable que indica si encontró el nombre
	posicion = 0; //Inicializamos variable que indica la posición del nombre encontrado
	//Preguntamos el nombre que quiere borrar y lo guardamos
	printf("\n Que nombre quieres borrar? "); 
	scanf("%s",&nombre_borrar);
	
	//Ciclo que buscara el nombre a borrar
	for(contador=0;contador<6;contador++){
		if(strcmp(nombre_borrar, nombre[contador])==0){ //Comparamos y si encontramos el nombre...
			encontro = 1; //Activamos bandera de que encontró el nombre
			posicion = contador; //Y guardamos la posición en donde lo encontró
			break; //Rompemos el ciclo
		}
	} 
	
	if(encontro==1){ //Si encontró el nombre a borrar...
		//Entramos a un ciclo que recorrerá los nombres desde la posición que lo encontró...
		//... borrando así el nombre que indicamos que queríamos borrar
		for(contador = posicion; contador < 6; contador++){ 
			strcpy(nombre[contador], nombre[contador + 1]);	
		}
		
		printf("\n -- MOSTRANDO NOMBRES -- \n");
		for(contador=0;contador<6;contador++){
			printf("%s \n",nombre[contador]);
		} 		
	}
	else //Si no encontró el nombre a borrar...
		printf("\n No se encontro ese nombre \n");
	
	return 0;		
}
