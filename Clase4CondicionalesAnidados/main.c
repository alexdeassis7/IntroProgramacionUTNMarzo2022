#include <stdio.h>
#include <stdlib.h>

/**4) Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este
se le asigna como un porcentaje de su salario mensual que depende de su antig�edad en la
 empresa de acuerdo con la siguiente tabla
     Tiempo	                            Utilidad
Menos de 1 a�o	                    5% del salario
1 a�o o m�s y menos de 2 a�os 	    7% del salario
2 a�os o m�s y menos de 5 a�os	    10% del salario
5 a�os o m�s y menos de 10 a�os     15% del salario
10 a�os o mas 	                    20% del salario
 */

int main()
{
    float antiguedad = 0, salario = 0,utilidad = 0 ;

    printf("Ingrese por favor el salario mensual \n");
    scanf("%f",&salario);
    printf("Ingrese por favor su antiguedad en la empresa \n");
    scanf("%f",&antiguedad);

    if(antiguedad < 1) //Menos de 1 a�o	     5% del salario
    {
        utilidad = salario * 0.05 ;
    }
    else  if(antiguedad >= 1 && antiguedad < 2)
    {
        utilidad = salario * 0.07 ;
    }
    else  if(antiguedad >= 2 && antiguedad < 5)
    {
        utilidad = salario * 0.10 ;
    }
    else  if(antiguedad >= 5 && antiguedad < 10)
    {
        utilidad = salario * 0.15 ;
    }
    else
    {
        utilidad = salario * 0.20;
    }

    printf("Su utilidad es de %.2f pesos\n",utilidad);
    return 0;
}
