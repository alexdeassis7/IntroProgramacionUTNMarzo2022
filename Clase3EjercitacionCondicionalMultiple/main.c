#include <stdio.h>
#include <stdlib.h>
/**2) Desarrollar un algoritmo que permita ingresar un n�mero entero
comprendido entre 1 y 10, y que muestre por pantalla si el n�mero es par o
impar.*/
int main()
{
    int num = 0 ;

    printf("Ingrese un numero entero comprendido entre 1 y 10 !\n");
    scanf("%i",&num);

    if(num >= 1 && num <= 10 )
    {
        switch(num)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Numero Impar\n");
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Numero Par\n");
            break;
        }
    }
    else
    {
        printf("Numero ingresado incorrecto!\n");
    }

    printf("fin app");
    return 0;
}
/**
algoritmo numero_par_impar_2
var
    entero: num
    inicio

    mostrar("Ingrese un n�mero entero comprendido entre 1 y 10")
    leer(num)

    si num >= 1 y num <= 10 entonces

        segun-sea num hacer
            caso 1, 3, 5, 7, 9:
                mostrar("N�mero impar")
            caso 2, 4, 6, 8, 10:
                mostrar("N�mero par")
        fin-segun

    si-no
        mostrar("N�mero ingresado incorrecto!")
    fin-si
fin
*/
