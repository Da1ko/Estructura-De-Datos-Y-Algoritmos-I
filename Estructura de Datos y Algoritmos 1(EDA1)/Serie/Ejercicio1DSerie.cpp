//ejemplo de cola
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op, dato, x, tam=50,p;
	char documento,*colaNormal,*colaUrgente;
	colaNormal=(char*)malloc(tam*sizeof(char));
	colaUrgente=(char*)malloc(tam*sizeof(char));
	do
	{
	printf("Que accion desea realizar? \n");
	printf("1.-Ingresar documento\n");
	printf("3.-Mostrar datos de la cola\n");
	printf("5.-Salir\n");
	scanf("%d", &op);
		switch(op)
		{
			case 1:
				int i;
				i++;
				printf("Ingrese el nombre del documento:\n");
				fflush(stdin);
				gets(documento);
				printf("Su documento requiere impresion urgente?\n");
				printf("1.-Si\n2.-No\n");
				scanf("%d",&p);
				if(p==1){
					colaUrgente[i]=documento;
					printf("%s",colaUrgente);
				}
				else{
					colaNormal=documento;
				}
				break;				
			case 3:
				for(int j=0;j<=i;j++){
					printf("%s\n",colaUrgente[j]);
				}
					printf("Cola urgente: %s\n",colaUrgente);
					printf("Cola normal: %s\n",colaNormal);				
				break;
				
			case 5:
				printf("Hasta la vista beibi\n");
				break;
		}
	}while(op<5);
}
