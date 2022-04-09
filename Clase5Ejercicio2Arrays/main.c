#include <stdio.h>
#include <stdlib.h>
/**2)	Llenar dos vectores A y B de 45 elementos cada uno, sumar
el elemento uno del vector A con el elemento uno del vector B y así
sucesivamente hasta 45, almacenar el resultado en un vector C, e imprimir
el vector resultante por pantalla.
*/
int main()
{
    int vectorA[45];
    int vectorB[45];
    int vectorC[45];

    for(int x = 0,y = 225 ; x < 45 ; x++,y+=2)
    {
        vectorA[x] = x;
        vectorB[x] = y;
        vectorC[x] = vectorA[x]  + vectorB[x] ;
    }

    printf("*************************** VECTOR A *********************\n");
    for(int x = 0; x < 45 ; x++)
    {
        printf("vectorA[%i]=%i\n",x,vectorA[x]);
    }

    printf("*************************** VECTOR B *********************\n");
    for(int x = 0; x < 45 ; x++)
    {
        printf("vectorB[%i]=%i\n",x,vectorB[x]);
    }

    printf("*************************** VECTOR C *********************\n");
    for(int x = 0; x < 45 ; x++)
    {
        printf("vectorC[%i]=%i\n",x,vectorC[x]);
    }
    return 0;
}
