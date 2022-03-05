//los comentario siempre son ignorados por el compilador

//comentario de linea  : atajo ctrl + shift + c
/**comentarios de
bloque me permite comentar en varios renglones */

//agregamos librerias : codigo que ya fue creado y testeado
#include <stdio.h> // standart input output
#include <stdlib.h>

int main() // funcion principal o punto de inicio de ejecucion de la app
{
    //{} cuerpo de la funcion principal

    //atajo para salvar cambios : ctrl + s

    //mostramos una linea por pantalla
    printf("Hola Mundo!\n");
    //la sentencias en C siempre finalizan en ;
    printf("Hola Alumnos!\n");

    /**Tipos de Datos Simples y estructurados
    Todos los datos tienen un tipo asociado

    Tipos simples:
    1-numericos  : ej 1 , 1.14
    2-logicos  : verdadero o falso  - true or false
    3-alfanuméricos String : "Hola Mundo!" ,"56564"


    Variable :
    Es un espacios en memoria RAM que puede mutar su valor a lo largo de la
    ejecucion del programa
    */

    /**defino variables */

    //entero
    //tipoDeDato nombreVarible
    int edadAlumno = 5 ;
    printf("edadAlumno :%i  \n", edadAlumno);  //mostramos una variable en pantalla

    //modificamos el valor de la variable edadAlumno
    edadAlumno = 15;
    printf("edadAlumno :%i\n ", edadAlumno);

    //definir e inicializar una variable float
    float precioProducto = 15.5; //variable con numero con coma

    //variable de tipo caracter
    char sexo = 'F';

    return 0;
}
