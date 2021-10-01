#include<stdio.h>
struct NuevoTipo
{
	char c;
	int  i;
	float f;
	double d;
}var1;
main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	printf("%d\n",sizeof(NuevoTipo));
	printf("%d",sizeof(var1));
}
