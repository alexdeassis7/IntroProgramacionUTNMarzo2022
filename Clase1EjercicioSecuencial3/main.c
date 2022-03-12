#include <stdio.h>
#include <stdlib.h>
/**Ejercicio 3)
 Un maestro desea saber que porcentaje de hombres
 y que porcentaje de mujeres hay en un grupo de estudiantes*/
int main()
{
    printf("INICIO DE LA APP!\n");

    //definimos las variables de trabajo
    float numMujeres = 0, numHombres = 0,totalAlumnos = 0, porcentajeMujeres = 0,porcentajeHombres = 0 ;
    int codigoAsciiSimboloPorcentaje = 37;

    //solicitamos datos al usuario
    printf("Ingrese por favor la cantidad de Alumnos Hombres\n");
    scanf("%f",&numHombres);
    printf("Ingrese por favor la cantidad de Alumnas Mujeres\n");
    scanf("%f",&numMujeres);

    //procesamos la informacion
    totalAlumnos = numHombres + numMujeres;
    porcentajeMujeres = numMujeres * 100 / totalAlumnos;
    porcentajeHombres = numHombres * 100 / totalAlumnos;

    //mostramos los resultados
    printf("El porcentaje de hombres de su curso es %c %.2f \n",codigoAsciiSimboloPorcentaje , porcentajeHombres);
    printf("El porcentaje de mujeres de su curso es %c %.2f \n",codigoAsciiSimboloPorcentaje , porcentajeMujeres);


    printf("FIN DE LA APP!\n");
    return 0;
}
