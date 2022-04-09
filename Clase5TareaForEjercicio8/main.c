#include <stdio.h>
#include <stdlib.h>
/**8)	Simular el comportamiento de un reloj digital, imprimiendo la hora,
minutos y segundos de un día desde las 0:0:0 hasta las 23:59:59 */

int main()
{
    /**For anidados*/
    for(int hs = 0 ; hs <= 23 ; hs++)  /**for que controla las horas*/
    {
        for(int min = 0 ; min <= 59 ; min++)/**for que controla los minutos */
        {
            for(int seg = 0 ; seg <= 59 ; seg++)/**for que controla los minutos */
            {
                printf("%i:%i:%i \n",hs, min,seg);
            }
        }
    }

    return 0;
}
