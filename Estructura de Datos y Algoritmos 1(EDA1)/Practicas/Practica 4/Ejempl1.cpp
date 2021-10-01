#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	float *coeficiente,x;
	int n,op=1;
	do{
		float y=0;
		printf("De que grado es tu polinomio?\n");
		scanf("%d",&n);
		coeficiente=(float*)malloc(n*sizeof(float));
		for(int i=0;i<=n;i++){
		printf("\nIngresa el valor A%dx^%d:\n",i,i);
		scanf("%f",&coeficiente[i]);
		}
		printf("\nPara que valor de x tiene que evaluar en el polinomio:\n ");
		scanf("%f",&x);
		for(int i=0;i<=n;i++){
			y+=coeficiente[i]*pow(x,i);
		}
		printf("\nEl valor de f(x)= %.2f",y);
		printf("\nQuieres evaluar otro polinomio?\n");
		printf("\n1.- Si\n2.-No\n");
		scanf("%d",&op);
	}while(op==1);
}
