#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**Estructura Repetitiva While*/

    /**Mostrar los numeros del 1 al 100 */
    int contador = 1 ;

    while(contador <= 100)
    {
        /**sentencias a ejecutar MIENTRAS la condicion sea TRUE*/
        printf("%i \n",contador);

        /**incremento la variable de control contador para no caer en un
        LOOP INFINITO*/
        //contador = contador + 1 ;
        //contador += 1;
        /**Operador AutoIncremental*/
        contador++ ;

    }

    contador = 100 ;

    printf("Mostramos los numeros del 100 al 0 \n");
    while(contador >= 0)
    {
        printf("%i \n", contador);
        //contador = contador - 1 ;
        //contador -= 1;
        contador--;
    }


    printf("Fin de la app\n");
    return 0;
}


/**pseudocódigo de la estructura While:

mientras <condición> hacer
    sentencia 1
    sentencia 2
    .
    .
    sentencia n
fin-mientras
*/





