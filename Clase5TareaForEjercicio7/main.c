#include <stdio.h>
#include <stdlib.h>

/**7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando , el multiplicador y el producto*/

int main()
{
    int numeroIngresado = 0,resultado = 0 ;


    printf("Ingrese el numero del cual desea conocer su tabla de multiplicar\n");
    scanf("%i",&numeroIngresado);

    for(int contador = 1; contador <=10 ; contador++)
    {
        resultado = numeroIngresado * x ;
        printf("%i x %i = %i\n",numeroIngresado,contador,resultado);
    }

    return 0;
}
