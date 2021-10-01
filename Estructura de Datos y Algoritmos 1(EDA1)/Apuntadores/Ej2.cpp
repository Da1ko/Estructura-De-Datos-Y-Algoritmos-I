#include <stdio.h>
int main(){
	int *apunt, x=3;
	apunt = &x; //acceder a la direccion de x
	printf("El valor de x es %d",x);
	printf("\n\n\t La direccion de x es %d",&x);
	printf("\n\n\t El valor de ap x es %d",apunt);
	printf("\n\n\t La direccion de ap es %d",&apunt);



	
}
