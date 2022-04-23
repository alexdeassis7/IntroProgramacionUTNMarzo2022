#include <stdio.h>              /**Funciones o subAlgoritmos*/
#include <stdlib.h>
/**importamos una libreria math.h para utilizar sus funciones matematicas*/
#include <math.h>

//prototypo de la funcion suma
float suma();
float multiplicar();
float restar();
float dividir();
void mostrarMensajeErrorDividir();

/**Scope o alcance de una variable
variable local : Solo "vive" dentro del subalgoritmo donde fue definida

variable Global : es una variable que peude ser utilizada dentro de todos los sub-algoritmos de la app
  */
float n1 = 0, n2 = 0; //una variable global debe ser definida fuera de todo sub algoritmo

int main()//funcion principal que ejecuta el SO , no recibe ningun parametro y retorna un int
{
    printf("Inicio de la App!\n"); //imvocamos a la funcion printF();

    /**Utilizamos las fuint main()//funcion principal que ejecuta el SO , no recibe ningun parametro y retorna un int*/

    printf("Inicio de la App!\n"); //imvocat calcula la raiz cuadrada de un numero
    printf(" sqrt(7)= %f\n",sqrt(7));
    printf(" pow(2,4)= %f\n",pow(2,4));   //pow :retorna la base elevada al exponenete
    printf(" pow(3,3)= %f\n",pow(3,3));


    float resultado = 0;
    int opcionIngresada = 0, bandera  = 0;
    //solicito dos numeros al user desde mi algoritmo principal
    printf("\ningrese el numero 1 \n");
    scanf("%f",&n1);

    printf("ingrese el numero 2 \n");
    scanf("%f",&n2);

    do
    {

        if(bandera == 1)//ya pasate al menos una vez por el cuerpo del do while ? 1 = si , 0 = no
        {
            printf("la opcion %i es invalida intente nuevamente \n",opcionIngresada);
        }
        printf("**********ingrese la operacion aritmetica a realizar**********\n");
        printf("1 Sumar\n2 Restar\n3 Multiplicar\n4 Dividir\n");
        scanf("%i",&opcionIngresada);

        bandera = 1;
    }
    while(opcionIngresada > 4 || opcionIngresada <= 0 );


    switch(opcionIngresada)
    {
    case 1 :
        /**invocamos a la funcion sumar*/
        printf("El resultado de la suma es : %f\n", suma());
        break;
    case 2 :
        /**invocamos a la funcion restar*/
        printf("El resultado de la resta es : %f\n",restar());
        break;
    case 3 :
        /**invocamos a la funcion multiplicar*/
        printf("El resultado de la multiplicacion es : %f\n",multiplicar());
        break;
    case 4 :
        resultado = dividir();
        /**invocamos a la funcion dividir*/
        if(resultado != 0)
        {
            printf("El resultado de la division es : %f\n",dividir(n1, n2));
        }
        break;
    }



    //invocamos a la funcion suma() enviandole por parametro los dos valores ingresados por el user (n1 y n2 )
    //float valorDeRetorno = suma(n1, n2) ;
    //mostrarMensajeErrorDividir();


    //printf("la funcion suma nos retorno el siguiente valor  %f\n", valorDeRetorno);
    //printf("la funcion suma nos retorno el siguiente valor  %f\n", suma(n1, n2) );
    return 0;
}

/**Ejemplo de funcion que recibe dos parametros y los suma */
/**tipoDeValorDeRetorno nombreDeLaFuncion (tipoParametro1 Nombre1 ,tipoParametroDos nombre2 ,tipoParametroN ,nombreN )*/
//numero1 , numero2 y resultado son variables locales a la funcion suma ,osea que solo "viven" en memoria RAM
//mistras la funcion suma esta en ejecucion
float suma()
{
    /**cuerpo de la funcion*/
    float resultado = 0 ;
    resultado = n1 + n2 ;
    /**retornamo el dato de tipo float*/
    return resultado;
}

/**Crear 3 Funciones :

 a)una que multiplique dos numeros float ,*/
float multiplicar()
{
    /**retornamos el dato de tipo int*/
    return n1 * n2 ;
}

/**b)una funcion que reste dos numero de tipo float*/
float restar()
{
    return n1 - n2;
}

/**c)funcion que divida dos numero de tipo float
  (tener en cuenta que no es posible dividir por cero )*/
float dividir()
{
    if(n2 == 0)
    {
        mostrarMensajeErrorDividir();
        return 0;
    }
    else
    {
        return n1/ n2;
    }
}

/**Procedimiento: es un tipo de subalgoritmo a diferencia de la
funcion NUNCA retorna un valor (no tendra la palabra return en su cuerpo de funcion)
su tipo de valor de retorno siempre es void!
*/
void mostrarMensajeErrorDividir()
{
    printf("no se puede dividir por cero!\n");
}



