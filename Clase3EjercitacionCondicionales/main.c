#include <stdio.h>
#include <stdlib.h>
/**1) Determinar si un alumno aprueba un curso de programación,
sabiendo que aprobara si su promedio de
tres calificaciones es mayor o igual a 7; reprueba en caso contrario.*/

#define CANTIDADNOTAS 3
int main()
{
    printf("Inicio App!\n");
    //defino variables de trabajo
    float nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0  ;

    //solicitamos los datos al user
    printf("Ingrese la nota 1 \n");
    scanf("%f",&nota1);

    printf("Ingrese la nota 2 \n");
    scanf("%f",&nota2);

    printf("Ingrese la nota 3 \n");
    scanf("%f",&nota3);

    //calculamos el promedio
    promedio = ( nota1 + nota2 + nota3 ) / CANTIDADNOTAS ;

    if( promedio >= 7 )
    {
        printf("el promedio fue de %f , usted fue aprobado!\n", promedio );
    }
    else
    {
        printf("el promedio fue de %f , usted fue Reprobado, vuelvas pronto a recuperar sus examenes!\n", promedio );

    }
    printf("Fin App \n");

    return 0;
}
