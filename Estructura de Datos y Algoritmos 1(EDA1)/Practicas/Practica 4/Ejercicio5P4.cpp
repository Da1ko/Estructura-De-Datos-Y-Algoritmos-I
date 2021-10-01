#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n,p=100;
	char *palindromo;
	palindromo=(char*)malloc(p*sizeof(char*));
	printf("Ingrese su palindromo\n");
	fflush(stdin);
	gets(palindromo);
	n= strlen(palindromo);
	for(int i=0;i<=strlen(palindromo);i++){
		printf("%c\n",*(palindromo+i));
	}
	int a=0,k=0;
	for(int i=strlen(palindromo)-1;i>=0;i--){
		if(palindromo[i]==palindromo[a]){
			k++;
		}
		a++;
	}
	if(strlen(palindromo)==k){
		printf("\nEs palindromo\n");
	}
	else{
		printf("\nNo es palindromo\n");
	}
}


