#include <stdio.h>
#include <stdlib.h>
/** 4)	Leer 20 números e imprimir cuantos son positivos ,
    cuantos negativos y cuantos neutros */
int main()
{
    int numeroIngresado = 1, contador = 1, cantidadNeutros = 0, cantidadPositivos = 0, cantidadNegativos = 0;

    while(contador <= 20)
    {
        printf("ingrese por favor el numero %i!\n", contador);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0)
        {
            printf("positivo\n");
            cantidadPositivos++;
        }
        else if(numeroIngresado < 0)
        {
            printf("negativo\n");
            cantidadNegativos++;
        }
        else
        {
            printf("Neutro\n");
            cantidadNeutros++;
        }

        contador++;
    }

    printf("Cantidad Negativos %i\nCantidad Positivos %i\nCantidad  Neutros %i\n",cantidadNegativos, cantidadPositivos, cantidadNeutros );

    printf("Fin de la App \n");
    return 0;
}
