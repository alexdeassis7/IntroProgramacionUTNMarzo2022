#include <stdio.h>
#include <stdlib.h>
//Ejecicio de SubAlgoritmos
// 					PROBLEMA PRINCIPAL

//Calcular el promedio de tres notas de un alumno y la condicion final
//osea si aprobo o reprobo la materia "Estructuras de Datos 2"
//aprueba con promedio mayor o igual a 7 , caso contrario reprueba

//Lo descomponemos en Sub Problemas menos "complejos"



//* Dentro del cuerpo de la funcion principal main() solo deberan tener 4 lineas
// que invoquen a los subalgoritmos desarrollados
//variables globales
float nota1 = 0,nota2 = 0,nota3 = 0, promedio = 0;

int main()
{
    solicitarDatos();
    calcularpromedio();
    validarCondicion();
    mostrarResultados();

    return 0;
}
//subProblema 1 : entrada de datos (nota1 , nota2 , nota3)
void solicitarDatos()
{
    printf("ingrese la nota 1 \n");
    scanf("%f", &nota1);
    printf("ingrese la nota 2 \n");
    scanf("%f", &nota2);
    printf("ingrese la nota 3 \n");
    scanf("%f", &nota3);
}
//subProblema 2 : Calcular el promedio del alumnos
void calcularpromedio()
{
    promedio = (nota1 +nota2 + nota3) / 3 ;
}
//subProblema 3 : Calcular la Condición del alumno
void validarCondicion()
{
    if(promedio >= 7)
    {
        printf("Aprobado\n");
    }
    else
    {
        printf("Desaprobado\n");
    }
}
//subProblema 4 : mostrar resultados por pantalla
void mostrarResultados()
{
    printf("las notas ingresadas del alumnos fueron :\n");
    printf("nota 1 : %.2f\n", nota1);
    printf("nota 2 : %.2f\n", nota2);
    printf("nota 3 : %.2f\n", nota3);
    printf("Su promedio es : %.2f \n", promedio);
}
