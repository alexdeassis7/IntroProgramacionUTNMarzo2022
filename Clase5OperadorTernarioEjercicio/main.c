#include <stdio.h>
#include <stdlib.h>
/**solitar la edad de 5 alumnos y determinar cuales son mayores de edad ,
 utilizando operador ternario */
int main()
{
    int edadIngresada = 0 ;

    for(int x = 1 ; x <= 5 ; x++)
    {
        printf("por favor ingrese la edad del alumno %i\n", x);
        scanf("%i",&edadIngresada);
        printf("El Alumno es %s \n", edadIngresada >= 18 ? "Mayor de edad" : "Menor de Edad" );
    }

    return 0;
}
