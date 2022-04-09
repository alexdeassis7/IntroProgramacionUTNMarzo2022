#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Que son los Arreglos Unidimensionales!\n");
    /**son estructuras de datos estaticas y representan un conjunto  finito
     y ordenado de elementos homogéneos (del mismo tipo ) , los arrays pueden ser
     unidimensionales ,tambien llamados vectores o arreglos lineales , bidimencionales
     (matrices) o multidimensionales.
     todo Arreglo tiene asociado un nombre o identificador y cada elemento del arreglo
     es referenciado por la posicion que ocupa .Para referenciar a cada posicion
     del arreglo se utilizan INDICES , los arrays utilizan posiciones consecutivas de memoria !*/

    //las estructuras de datos se clasifican en Estaticas (memoria gestionada en tiempo de compilación)
    // o dinamicas  (memoria gestionada en tiempo  de ejecucion)

    /** Las operaciones que pueden realizarse con vectores son :
    - asignacion
    - lectura y escritura
    - recorrido
    - ordenamiento
    - búsqueda
    */


    /**Declaración de un array.
    tipoDeDato Identificador [cantidadElementos];
    */

    int vector[10], i = 0 ;

    printf("cargamos el vector \n");
    vector[0] = 123;
    vector[1] = 124;
    vector[2] = 125;
    vector[3] = 126;
    vector[4] = 127;
    vector[5] = 128;
    vector[6] = 129;
    vector[7] = 1231;
    vector[8] = 1232;
    vector[9] = 1233;

    printf("Mostramos los datos del Vector cargado previamente \n");
    printf("  vector[0] = %i \n",vector[0] );
    printf("  vector[1] = %i \n",vector[1] );
    printf("  vector[2] = %i \n",vector[2] );
    printf("  vector[3] = %i \n",vector[3] );
    printf("  vector[4] = %i \n",vector[4] );
    printf("  vector[5] = %i \n",vector[5] );
    printf("  vector[6] = %i \n",vector[6] );
    printf("  vector[7] = %i \n",vector[7] );
    printf("  vector[8] = %i \n",vector[8] );
    printf("  vector[9] = %i \n",vector[9] );

    /** sumo dos elementos del vector */
    int resultado = vector[0] + vector[9];
    printf("la suma de los indices 0 y 9 del array es : %i",resultado);


    /**otra manera de inicializar un vector*/
    int vector2 [] = {1,2,3,4,5,6,7,8,9,90,123,45};
    printf("Mostramos los datos del Vector2  \n");
    printf("  vector[0] = %i \n",vector2[0] );
    printf("  vector[1] = %i \n",vector2[1] );
    printf("  vector[2] = %i \n",vector2[2] );
    printf("  vector[3] = %i \n",vector2[3] );
    printf("  vector[4] = %i \n",vector2[4] );
    printf("  vector[5] = %i \n",vector2[5] );
    printf("  vector[6] = %i \n",vector2[6] );
    printf("  vector[7] = %i \n",vector2[7] );
    printf("  vector[8] = %i \n",vector2[8] );
    printf("  vector[9] = %i \n",vector2[9] );
    printf("  vector[10] = %i \n",vector2[10] );
    printf("  vector[11] = %i \n",vector2[11] );

    char  vector3[] = "programadorSenior" ;
    char vector4[] = {'p','r','o','g','r','a','m','a','d','o','r','S','e','n','i','o','r','\0'};

    printf("mostramos los vectores de char\n");

    printf("%s\n", vector3);
    printf("%s\n", vector4);

    char cadena[2];

    for(int i = 0 ; i <= 2 ; i++)
    {
        cadena[i]=getchar();//getter character
    }


    int edades[10];
    for(int x = 0 ; x < 10 ; x++)
    {
        printf("Ingrese la edad %i\n", x);
        scanf("%i",&edades[x]);
    }

    /** recorremos un array mediante una estructura FOR*/

    for(int x = 0 ; x < 10; x++)
    {
        printf("edades[%i] = %i \n", x,edades[x]);
    }


    return 0;
}
