#include <stdio.h>
#include <stdlib.h>
/**
1) Desarrollar un algoritmo que permita ingresar dos números enteros
positivos (X y N) y se muestre por pantalla la N-ésima potencia de X

algoritmo potencia_mientras

var
    entero: X, N, potencia
inicio
    mostrar("Ingrese dos números positivos")
    leer(X,N)
    potencia = 1
    si (X > 0) y (N > 0) entonces
        mostrar("Potencia de base ", X, " y exponente ", N)
        mientras N > 0 hacer
            potencia = potencia * X
            N = N-1
        fin-mientras
        mostrar("La potencia es: ", potencia)
    si-no
        mostrar("Debe ingresar números positivos!")
    fin-si
fin
*/

int main()
{

    int x = 0, n = 0, potencia = 1 ;

    printf("Ingrese por favor el valor positivo de X!\n");
    scanf("%i",&x);
    printf("Ingrese por favor el valor positivo de N!\n");
    scanf("%i",&n);

    if( x > 0  && n > 0 )
    {
        printf("Potencia de base %i y exponente %i\n", x,n) ;
        while(n > 0)
        {
            potencia = potencia * x ;
            n = n -1;
        }
        printf("La potencia es: %i\n", potencia) ;
    }
    else
    {
        printf("Debe ingresar numeros positivos!\n");
    }

    return 0;
}
