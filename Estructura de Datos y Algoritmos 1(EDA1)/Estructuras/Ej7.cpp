#include <stdio.h>
#include <stdlib.h>

struct Complejo{
    float real;
    float img;
}complejo1,complejo2,complejo3;

int main(){
    //struct Complejo complejo3;
    
    printf("Dame la parte real del no.1 ->");
    scanf("%f",&complejo1.real);
    printf("\nDame la parte imaginaria del no.1->");
    scanf("%f",&complejo1.img);

    printf("\n\nDame la parte real del no.2 ->");
    scanf("%f",&complejo2.real);
    printf("\nDame la parte imaginaria del no.2->");
    scanf("%f",&complejo2.img);

    complejo3.real = complejo1.real + complejo2.real;
    complejo3.img = complejo1.img + complejo2.img;
	if(complejo3.img <0)
    printf("\n\nResultado: %.1f + %.1f i",complejo3.real,complejo3.img);




    return 0;
}

