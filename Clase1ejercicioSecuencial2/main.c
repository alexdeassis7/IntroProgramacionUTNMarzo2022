#include <stdio.h>
#include <stdlib.h>
/**defino una contante llamada PORCENTAJE cuyo valor es 0.15
y es un valor inmutable osea que no cambia a lo largo de la ejecucion de nuestra app*/
#define PORCENTAJE 0.15
/** Ejercicio 2) Una tienda ofrece un descuento del 15% sobre el total de la compra
y un cliente desea saber cuanto debera pagar finalmente por su compra */
int main()
{
    printf("INICIO DE LA APP\n");
    //definimos las variables de trabajo
    float totalCompra = 0, descuento = 0,total_a_pagar = 0;
    //defino una variable inmutable COSNTANTE
    const float PORCENTAJEINMUTABLE = 0.15;

    //PORCENTAJEINMUTABLE = 0.12; //ESTO DA ERROR , ya que no se puede modificar el valor de una constante !

    /**Solicitar los datos al usuario*/
    printf("Por favor ingrese el valor total de la compra\n");
    scanf("%f",&totalCompra);//guardamos el dato ingresado en la variable totalCompra

    /**Procesamos la Informacion*/
    descuento = totalCompra * PORCENTAJE ;
    total_a_pagar = totalCompra - descuento;

    /**mostramos los resultados por pantalla*/
    printf("El total a pagar es %.2f pesos\n", total_a_pagar);
    printf("Usted recibio un  descuento del %.4f pesos \n", descuento);

    printf("FIN DE LA APP");
    return 0;
}
