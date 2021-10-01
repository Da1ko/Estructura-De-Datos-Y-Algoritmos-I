#include <stdio.h>
#include <stdlib.h>
int numvocales(char *palabra);
int main(){
    int tam=1; 
    char *palabra; 
   	palabra=(char*)malloc(tam*sizeof(char*));
    printf("\n Introduzca una frase: ");
    gets(palabra);   

    printf("\n En el texto hay: %i vocales. \n",numvocales); 
}

int numvocales(char *palabra){
	int c=0;
    for(int i=0; i<palabra[i]; i++) 
	{
      switch (palabra[i]) 
	  {	
           case 'a':
                c++; 
                break;
           case 'e':
                c++;
                break;
           case 'i':
                c++;
                break;
           case 'o':
                c++;
                break;
           case 'u':
                c++;
                break;
       
		   case 'A':
                c++;
                break;
           case 'E':
                c++;
                break;
           case 'I':
                c++;
                break;
           case 'O':
                c++;
                break;
           case 'U':
                c++;
                break;		          
           default: 
                break;
      }
    }
	return c;	
}
	

