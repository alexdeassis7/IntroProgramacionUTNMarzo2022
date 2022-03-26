#include <stdio.h>
#include <stdlib.h>
/**3)	Leer 10 números e imprimir solamente los positivos*/
int main()
{
    int numeroIngresado = 0, contador = 1;

    while(contador <= 10)
    {
        printf("ingrese el numero %i!\n",contador);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0){
            printf("%i es Positivo!\n",numeroIngresado);
        }

        contador++;
    }


    return 0;
}
