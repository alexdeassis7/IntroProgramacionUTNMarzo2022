#include <stdio.h>
#include <stdlib.h>
/** ejercicio
   1) Desarrollar un algoritmo que permita ingresar 10 números enteros por
      teclado y que muestre por pantalla el promedio.*/

int main()
{
    float limite = 10, suma = 0, num = 0, promedio = 0;
    int contador = 1;

    do
    {
        printf("Ingrese el numero %i\n",contador);
        scanf("%f",&num);
        suma += num;
        //suma = suma + numero ;
        contador ++;
    }
    while(contador <= limite);

    promedio = suma / limite;
    printf("El promedio de los numeros ingresados es: %.2f ", promedio);

    return 0;
}
/**Pseudocódigo :

algoritmo promedio_repetir_hasta
var
    real: limite, contador, suma, num ,promedio
inicio
    limite = 10
    contador = 1
    suma = 0

    repetir
        mostrar("Ingrese un número")
        leer(num)
        suma = suma + num
        contador = contador + 1
    hasta-que contador > limite

    promedio = suma / limite
    mostrar("El promedio de los números ingresados es: ", promedio)
fin
*/
