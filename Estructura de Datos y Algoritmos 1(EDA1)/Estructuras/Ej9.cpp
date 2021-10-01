#include <stdio.h>
#include <stdlib.h>

struct complejo
{
	float r, i;
}*complejo1, *complejo2;

float sumar(float a, float b);

int main()
{
	struct complejo *complejo3;
	complejo1=(complejo*)malloc(sizeof(complejo));
	complejo2=(complejo*)malloc(sizeof(complejo));
	complejo3=(complejo*)malloc(sizeof(complejo));


	printf("\nDame la parte real del numero uno: ");
		scanf("%f", &complejo1->r);
	printf("\nDame la parte imaginaria del numero uno: ");
		scanf("%f", &complejo1->i);

	printf("\nDame la parte real del numero dos: ");
		scanf("%f", &complejo2->r);
	printf("\nDame la parte imaginaria del numero dos: ");
		scanf("%f", &complejo2->i);

	complejo3->r = sumar(complejo1->r, complejo2->r);
	complejo3->i = sumar(complejo1->i, complejo2->i);

	if(complejo3->i<0)
		printf("\n\n%.1f- %.1fi", complejo3->r, complejo3->i);
	else
		printf("\n\n%.1f + %.1fi", complejo3->r, complejo3->i);

	free(complejo1);
	free(complejo2);
	free(complejo3);
}

float sumar(float a, float b)
{
    return a + b;
}

