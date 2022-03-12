#include <stdio.h>
#include <stdlib.h>
/**Ejecicio 1)
Suponga que un individuo desea invertir en un banco y desea saber cuantos dinero
ganara despues de un mes si el banco paga a razon de 2% mensual*/
int main()
{
    printf("INICIO DEL APP\n");
    /**  Que variables de trabajao utilizare?*/
    //tipodeDato nombreDeVariable
    float capital = 0, ganancia = 0, saldoFinal = 0;

    //printf("capital : %f \n", capital);//,mostramos la variable capital por pantalla

    /**   Que va a ingresar a mi programa ?*/
    printf("Cuanto es el dinero que desea invertir este mes en el banco?\n");//mostrar mensaje en pantalla
    scanf("%f",&capital );  // capturamos un dato por teclado

    // printf("capital : %f ", capital);//,mostramos la variable capital por pantalla

    /**  que va a procesar mi programa?*/
    ganancia = capital * 0.02 ; /**calculo la ganancia*/
    saldoFinal = capital + ganancia;

    /**  que va a mostrar por pantalla mi programa ?*/
    printf("Usted invirtio %f pesos y obtuvo %f pesos de ganancia\n",capital, ganancia);
    printf("Su saldo actual es de %f pesos \n", saldoFinal);

    printf("FIN DEL APP\n");
    return 0;
}
