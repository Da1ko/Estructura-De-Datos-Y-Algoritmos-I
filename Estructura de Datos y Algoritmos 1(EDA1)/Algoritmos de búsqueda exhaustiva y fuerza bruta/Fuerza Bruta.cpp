//Ejercicio que obtiene las combinaciones de placas por fuerza bruta
#include<stdio.h>
#include<stdlib.h>

struct placa{
	char l1,l2,l3;
	int p;
};

int main(){
	placa *mamalon;
	mamalon=(placa*)malloc(17576000*sizeof(placa));
	int i,j,k,l,m=-1;
	for(i='A';i<='Z';i++){
		for(j='A';j<='Z';j++){
			for(k='A';k<='Z';k++){
				for(l=0;l<=999;l++){
					m++;
					mamalon[m].l1=i;
					mamalon[m].l2=j;
					mamalon[m].l3=k;
					mamalon[m].p=l;
					
					printf("%c%c%c%.3d\n",mamalon[m].l1,mamalon[m].l2,mamalon[m].l3,mamalon[m].p);
				}
			}
		}
	}
}
