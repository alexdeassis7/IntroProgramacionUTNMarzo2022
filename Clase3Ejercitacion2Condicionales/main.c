#include <stdio.h>
#include <stdlib.h>
/** 3) Un obrero necesita calcular su salario semanal, el cual se
       obtiene de la siguiente manera:
Si trabaja 40 horas o menos se le paga $16 por cada hora.
Si trabaja más de 40 horas se le paga $16 por cada una de las primeras
40 horas y $20 por cada hora extra.
*/
#define PRECIOHORABASE 16
#define PRECIOHORAEXTRAS 20
#define HORASBASE 40
int main()
{
    printf("Inicio App!\n");

    int horasTrabajadas = 0, horasExtras = 0, salarioSemanal = 0;

    printf("Ingrese las horas trabajadas!\n");
    scanf("%i",&horasTrabajadas);

    if(horasTrabajadas > HORASBASE)
    {
        //calculo el salario con hs extras
        horasExtras = horasTrabajadas - HORASBASE;
        salarioSemanal = horasExtras * PRECIOHORAEXTRAS + HORASBASE * PRECIOHORABASE;
    }
    else
    {
        //calculo el salario sin hs extras
        salarioSemanal =  horasTrabajadas * PRECIOHORABASE ;
    }
    printf("Su salario Semanal sera de %i pesos \n", salarioSemanal);

    printf("Fin App!\n");

    return 0;
}
