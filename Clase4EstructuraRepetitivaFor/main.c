#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Inicio del For!\n");

    /**For : Utilizada preferentemente cuadno se conoce de antemano
    el numero de repeticiones */

    /**mostramos los numeros pares entre el 0 y el 100 con la estructura for*/
    for (int i = 0 ; i <= 100 ; i+=2)
    {
        printf("%i\n",i);
    }

    printf("Fin del For!\n");

    /**3)	Leer 10 números e imprimir solamente los positivos*/
    int numeroIngresado = 0;

    for(int x = 1 ; x <= 10 ; x++ )
    {
        printf("ingrese el numero %i!\n",x);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0)
        {
            printf("%i es Positivo!\n",numeroIngresado);
        }
    }

    return 0;
}
