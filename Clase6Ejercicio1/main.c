#include <stdio.h>
#include <stdlib.h>
/**1)	Calcular el promedio de 50 valores almacenados en un Vector.
Determinar además cuantos son mayores que el promedio, imprimir el promedio,
el número de datos mayores que el promedio y una lista de valores mayores que el promedio .*/
#define CANTIDADELEMENTOS 10
int main()
{
    printf("Inicio app!\n");

    float vector[CANTIDADELEMENTOS];
    float promedio = 0, sumatoria = 0 ;
    int cantidadDatosMayoresAlPromedio = 0;

    /**Cargamos el vector*/
    for(int i = 0,j = 5 ; i < CANTIDADELEMENTOS ; i++, j+=2)
    {
        vector[i] = j;
        printf("vector[%i] = %.1f \n",i,vector[i] );
        sumatoria += vector[i];
    }

    printf("sumatoria = %.1f \n",sumatoria );

    /**calculamos y mostramos el promedio */
    promedio = sumatoria / CANTIDADELEMENTOS;
    printf("promedio = %.2f \n",promedio );

    /**contamos la cantidad de datos mayores al promedio*/
    for(int i = 0 ; i < CANTIDADELEMENTOS ; i++)
    {
        if(vector[i] > promedio)
        {
            cantidadDatosMayoresAlPromedio++;
        }
    }

    printf("tenemos %i datos mayores a %.2f dentro de nuestro vector\n",cantidadDatosMayoresAlPromedio, promedio );

    /**en este vector copiaremos todos los datos que son mayores al promedio */
    float mayoresQueElPromedio[cantidadDatosMayoresAlPromedio];
    int j = 0 ;

    for(int i = 0 ; i < CANTIDADELEMENTOS ; i ++)
    {
        if(vector[i] > promedio)
        {
            /**copiamos de un vercto ral otro */
            mayoresQueElPromedio[j] =  vector[i];
            j++;
        }
    }

    /**mostramos la lñista de datos mayores que el promedio */

    for(int i = 0 ; i < cantidadDatosMayoresAlPromedio ; i ++)
    {
        printf("promedio = %.2f \n",mayoresQueElPromedio[i] );
    }

    printf("Fin app!\n");
    return 0;
}
