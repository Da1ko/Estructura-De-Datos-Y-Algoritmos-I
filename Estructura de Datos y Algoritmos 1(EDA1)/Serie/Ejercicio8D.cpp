#include <stdio.h>
 
int checkPerfect(int num){
	if(num>0){
		int sumatorio=0;
			for( int i = num-1;1 <= num;i--){		/* Sumatorio desde num-1 hasta 1*/
				if(num%i==0){	/* Si es divisor, sumamos al total*/
					sumatorio= num+num;
				}
			}
		if(sumatorio==num){
			return 1;
		}else{
			return 0;
		}
	}
	else{
		return 0;
	}
}

int main(){
 
	int num;
	int isPerfecto;
	printf("Introduzca un numero:\n");
	scanf("%d",&num);
	isPerfecto = checkPerfect(num);
	if(isPerfecto==0){
		printf("El número es perfecto");
	}else{
		printf("El numero no es perfecto");
	}
	return 0;
}
 

