#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional Doble!\n");
    /**Evalúa una expresión lógica (condición). si esta es verdadera ,
     ejecuta las sentencias especificadas a coninuación de la palabra
     reservada "if" ;pero si la condicion resulta ser falsa ,entonces
     se ejecutan las sentencias especificadas a continuacion de la palabra else*/

    /**Ejemplo sintaxis if-else*/
//    int a = 10, b = 50;
//    if(b > a)
//    {
//        /**acciones a ejecutar si la condicion se cumple */
//        printf("se cumplio la condicion \n");
//    }
//    else
//    {
//        /**acciones a ejecutar si la condicion NO se cumple */
//        printf("NOOOOOOO se cumplio la condicion \n");
//    }

    /**Ejercicios de ejemplo:
    1) Desarrollar un algoritmo que permita determinar si un número
    ingresado por teclado es positivo o negativo
    */
    int numero = 0 ;

    printf("Ingresar un numero entero distinto a 0 \n");
    scanf("%i",&numero);

    if(numero > 0 )
    {
        printf("El numero ingresado es positivo \n");
    }
    else
    {
        printf("el numero ingresado es negativo \n");
    }

    printf("FIn de la app\n");

    return 0;
}
