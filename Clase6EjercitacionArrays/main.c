#include <stdio.h>
#include <stdlib.h>
/**10)	Diseñe un algoritmo que lea dos vectores A y B de 20 elementos cada uno
y multiplique el primer elemento de A con el último elemento de B y luego
el segundo elemento de A por el diecinueveavo elemento de B y así sucesivamente
hasta llegar al veinteavo elemento de A por el primer elemento de B.
El resultados de la multiplicación almacenarlo en un vector C*/
#define CANTIDADELEMENTOS 20
int main()
{
    printf("Inicio de la app!\n");

    int vectorA[CANTIDADELEMENTOS];
    int vectorB[CANTIDADELEMENTOS];
    int vectorC[CANTIDADELEMENTOS];

    for(int i = 25, j = 0 ; j < CANTIDADELEMENTOS ; i++, j++)
    {
        //cargo vector B
        vectorB[j] = i;
        printf(" vectorB[%i] %i  \n",j, vectorB[j] );
    }

    for(int i = 0,j = 19 ; i < CANTIDADELEMENTOS ; i++, j--)
    {
        //cargo vector A
        vectorA[i] = j;

        vectorC[i] = vectorA[i] * vectorB[j];

        //mostramos los resultados por pantalla
        printf("vectorA[i] %i X vectorB[i] %i = vectorC[i]%i \n",vectorA[i], vectorB[j], vectorC[i] );
    }

    printf("Fin de La App!\n");
    return 0;
}
