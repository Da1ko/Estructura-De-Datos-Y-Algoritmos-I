//topdown
#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n);
int pedirNumero();
int main(){
	fibonacci(pedirNumero());
	return 0;
}

int fibonacci(int n){
	int n1=0,n2=1,n3;
	do{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}while(n2<n);
}

int pedirNumero(){
	int x;
	printf("Hasta que numero deseas la serie\n");
	scanf("%d",&x);
	printf("0\t");
	return x;
}
