#include <stdio.h>
#include <stdlib.h>
/**La estructura condicional múltiple es utilizada cuando se debe elegir entre
más de dos alternativas de acuerdo con el valor de una variable. Evalúa una
expresión que puede resultar en N valores distintos. Según el
resultado de la expresión, se ejecutarán las sentencias definidas para el
valor que se ha obtenido.

Esta expresión requiere que la variable que se evalúa sea de tipo entero o
carácter. La aplicación de la sentencia "default" es opcional y debe ser utilizada
cuando necesitamos ejecutar un conjunto de acciones en el caso de que el
resultado de la variable no sea igual a ninguno de los valores especificados
en las sentencias caso.*/
int main()
{
    printf("condicional Multiple - Switch!\n");

    /**   Ejercicio Demo Sintaxis:
    1) Desarrollar un algoritmo que permita ingresar un número entero
    comprendido entre 1 y 7, y que muestre por pantalla el día de la semana al
    que se corresponde. */

    int num = 0;
    //solicito dato al usuario
    printf("Ingrese un numero entero comprendido entre 1 y 7 \n");
    scanf("%i",&num);

    //evaluo el valor de la variable num
    switch(num)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Lunes\n");
        break;
    case 3:
        printf("Martes\n");
        break;
    case 4:
        printf("Miercoles\n");
        break;
    case 5:
        printf("Jueves\n");
        break;
    case 6:
        printf("Viernes\n");
        break;
    case 7:
        printf("Sabado\n");
        break;

    default:
        printf("el numero %i no corresponde a ningun dia de la semana \n", num);

    }

    printf("Fin de la app \n");

    return 0;
}

/** pseudocodigo del ejercicio

algoritmo dia_de_la_semana
var
    entero: num
inicio
    mostrar("Ingrese un número entero comprendido entre 1 y 7")
    leer(num)
    segun-sea num hacer
        caso 1:
            mostrar("Domingo")
        caso 2:
            mostrar("Lunes")
        caso 3:
            mostrar("Martes")
        caso 4:
            mostrar("Miércoles")
        caso 5:
            mostrar("Jueves")
        caso 6:
            mostrar("Viernes")
        caso 7:
            mostrar("Sábado")
        si-no:
            mostrar("el numero no corresponde a ningun dia de la semana !")
    fin-segun
fin
*/
