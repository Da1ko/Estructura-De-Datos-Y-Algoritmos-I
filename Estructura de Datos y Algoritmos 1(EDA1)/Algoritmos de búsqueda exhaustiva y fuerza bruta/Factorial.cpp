#include<stdio.h>
#include<stdlib.h>

int factorial(int n);

main(){
	int fac,n;
	printf("Digame hasta que numero quieres el factorial:\n");
	scanf("%d",&n);
	fac = factorial(n);
	printf("%d",fac);
}

int factorial(int n){
	
	int f;
	if(n==0){
		f=1;
	}
	else{
		f=n*factorial(n-1);
	}
	return f;
}
