#include <stdio.h>
#include <stdlib.h>

#define PORCENTAJEDESCUENTO 0.10
/**Las estructuras condicionales se clasifican en:
 simples, dobles y m�ltiples.*/
int main()
{
    printf("Condicional Simple!\n");
    /**Eval�a una expresi�n l�gica (condici�n). si esta es verdadera ,
    ejecuta las sentencias especificadas a coninuaci�n de la palabra
    reservada "if" ; si es falsa , no realiza ninguna acci�n y
     contin�a con el flujo del algoritmo*/

    /** Demo IF:
        int a = 10, b = 15;

        printf("antes de la estructura if !\n");
        if(b > a)
        {
            //cuerpo del if : sentencias a ejecutar si la condicion se cumple
            printf("La condicion fue verdadera y por eso ves este mensaje \n");
        }
        printf("despues  de la estructura if !\n");
    */

    /**ejercicio 1 :
    1) Implementar un algoritmo que calcule y muestre por pantalla el valor
    final de la compra de un art�culo. El algoritmo debe permitir el ingreso del
    precio del art�culo y la cantidad de art�culos. Si el subtotal es superior a
    1000, entonces se debe aplicar un descuento del 10 %.*/

    int cantidad = 0 ;
    float precio = 0,descuento = 0, subtotal = 0, totalCompra = 0 ;
    char nombreArticulo[50];//aqui podemos guardar una palabra

    printf("Calculo de la compra de un articulo\n");

    printf("Ingrese el precio del articulo\n");
    scanf("%f",&precio);

    printf("Ingrese la cantidad de articulos a comprar\n");
    scanf("%i",&cantidad);

    printf("Ingrese el nombre del articulo a comprar\n");
    scanf("%s",nombreArticulo);//%10s Lee m�ximo 10 caracteres y le concatena el caracter cero .

    subtotal = precio * cantidad;

    if(subtotal > 1000)
    {
        descuento = subtotal * PORCENTAJEDESCUENTO;
    }

    totalCompra = subtotal - descuento;

    if(descuento > 0)
    {
        printf("Se aplico un descuento de %f\n",descuento);

    }

    printf("usted acaba de compra un %s \n", nombreArticulo );
    printf("y el valor final de su compra es %f \n", totalCompra );

    return 0;
}

/**
Pseudocodigo:

algoritmo calculo_compra_articulo_descuento
var
	entero: cantidad
	real: precio, descuento, subtotal, totalCompra
inicio
	mostrar("C�lculo de la compra de un art�culo")
	mostrar("Ingrese el precio del art�culo")
	leer(precio)
	mostrar("Ingrese la cantidad de art�culos a comprar")
	leer(cantidad)
	subtotal = precio * cantidad
	descuento = 0

	si subtotal > 1000 entonces
		descuento = subtotal * 0.10
	fin-si

	totalCompra = subtotal - descuento

	si descuento > 0 entonces
		mostrar("Se aplic� un descuento de ", descuento)
	fin-si

	mostrar("El valor final de la compra es: ", totalCompra)
fin
*/
