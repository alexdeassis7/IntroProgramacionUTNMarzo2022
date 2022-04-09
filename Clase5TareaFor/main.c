#include <stdio.h>
#include <stdlib.h>
/**5)	Leer 15 números negativos y convertirlos a positivos e imprimir dichos números.*/
int main()
{
    int  numeroIngresado = 0, bandera = 0 ;

    for(int contador = 0 ; contador < 15 ; contador++)
    {

        do
        {
            if(bandera == 1)
            {
                printf("EL NUMERO INGRESADO NO ES NEGATIVO !\n");
            }

            printf("ingrese por favor un numero Negativo!\n");
            scanf("%i",&numeroIngresado);

           bandera = 1; /**esta bandera me indica que se ingreso al menos una vez al Do while*/
        }
        while(numeroIngresado >= 0); /**Validamos que el numero ingresadao sea negativo */

        bandera = 0 ;
        numeroIngresado *= -1; /** numeroIngresado = numeroIngresado  * (-1);  */
        printf("numero comvertido a positivo %i \n", numeroIngresado);
    }

    return 0;
}
