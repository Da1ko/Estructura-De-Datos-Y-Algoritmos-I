#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	srand(time(NULL)); //cada vez que se ejecuta el programa genera numeros aleatorios distintos
	int n;
	printf("De que tama¤o es el arreglo: \n");
	scanf("%d",&n);
	int *ap;
	for(int i=0; i<n ; i++)
		ap=(int*)malloc(n*sizeof(int));
 	for(int i=0;i<n;i++){
 			ap[i]=0+rand()%20;//suma el valor aleatorio 10 unidades para hacer un rango de 10 a 20
		 }
	}
	printf("El arreglo que capturaste es :\n");
	for(int i=0;i<n;i++){
 			printf("%d\t",ap[i]);
		}
		printf("\n");
	}
}
