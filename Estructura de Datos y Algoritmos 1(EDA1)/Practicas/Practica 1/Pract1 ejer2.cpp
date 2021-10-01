#include <stdio.h>
int main()
{
    int numeroCalificaciones;
    int i;
    float promedio = 0;
    float calificacion;
    printf("Inserte las calificaciones a promediar\n");
    scanf("%l",&numeroCalificaciones);
    for(i = 1; i < numeroCalificaciones; i++)
        {
           printf("Inserte la calificacion %d\n",i);
           scanf("%f",calificacion);
           promedio+=calificacion;
        }
        promedio = promedio/numeroCalificaciones;
        printf("El promedio es: %f",promedio);
return 0;
}

