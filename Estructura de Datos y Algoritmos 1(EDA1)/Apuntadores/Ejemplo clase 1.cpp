#include <stdio.h>
#include <stdlib.h>
 main(){
 	
 	int *ap; 
 	int n, i;
 	printf("Cuantos elementos tiene tu arreglo?\n");
 	
 	scanf("%d", &n);
 	ap = (int*)malloc(sizeof(int)*n);
 	for (i=0; i<n; i++){
 		
 		printf("Dame el valor del elemento: %i\n", i);
 		
 		scanf("%d", ap+i);
 		 		
	 }
	
	printf ("Los datos que ingresaste son=\n");
 	for (i=0;i<n; i++){
 		
 		printf("%i\n", *(ap+i));
		  
	 }
 	
 }

