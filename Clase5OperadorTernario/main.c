#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operador ternario o if else inline!\n");

    int num1 = 0, num2 = 0, mayor = 0 ;

    printf("ingrese el primer numero\n");
    scanf("%i", &num1);

    printf("ingrese el segundo numero\n");
    scanf("%i", &num2);

    /** obtengo el mayor mediante IF - ELSE*/
    if(num1 > num2)
    {
        mayor = num1;
    }
    else
    {
        mayor = num2;
    }

    printf("el mayor de los dos numeros ingresados es %i \n",mayor);
    /**  Operador Ternario:
    La forma general de este operador es :

    (condicion1 ? expresion2 : expresion 3)

    -Se evalua la condicion1 , si el resultado de la evaluacion de dicha expresion es
    verdadero se ejecuta la expresion2

    -si el resultado de la evaluacion de la condicion1 el falso se ejecuta la expresion3  */

    /**Obtengo el mayor mediante el operdor ternario */
    mayor = (num1 > num2 ? num1 : num2);

    printf("El mayor es %i \n", mayor);

    /**otro ejemplo de operador ternario*/
    int cantidadHelados = 0, precio = 100;

    printf("Ingrese cuantos helados comprar \n");
    scanf("%i", &cantidadHelados);

    printf("usted compro %s \n el precio es %i", (cantidadHelados > 1 ? "helados" :"UN helado"),precio);

    return 0;
}
