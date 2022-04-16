#include <stdio.h>              /**Funciones o subAlgoritmos*/
#include <stdlib.h>
//prototypo de la funcion suma
float suma(float,float );

int main()//funcion principal que ejecuta el SO , no recibe ningun parametro y retorna un int
{
    printf("Inicio de la App!\n"); //imvocamos a la funcion printF();
    float n1 = 0, n2 = 0 ;
    //solicito dos numeros al user desde mi algoritmo principal
    printf("ingrese el numero 1 \n");
    scanf("%f",&n1);

    printf("ingrese el numero 2 \n");
    scanf("%f",&n2);

    //invocamos a la funcion suma() enviandole por parametro los dos valores ingresados por el user (n1 y n2 )
    float valorDeRetorno = suma(n1, n2) ;

    printf("la funcion suma nos retorno el siguiente valor  %f\n", valorDeRetorno);
    printf("la funcion suma nos retorno el siguiente valor  %f\n", suma(n1, n2) );
    return 0;
}

/**Ejemplo de funcion que recibe dos parametros y los suma */
/**tipoDeValorDeRetorno nombreDeLaFuncion (tipoParametro1 Nombre1 ,tipoParametroDos nombre2 ,tipoParametroN ,nombreN )*/
//numero1 , numero2 y resultado son variables locales a la funcion suma ,osea que solo "viven" en memoria RAM
//mistras la funcion suma esta en ejecucion
float suma(float numero1,float numero2)
{
    /**cuerpo de la funcion*/
    float resultado = 0 ;
    resultado = numero1 + numero2 ;
    /**retornamo el dato de tipo float*/
    return resultado;
}
