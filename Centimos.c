#include <stdio.h>
#include <math.h>

int main( )
{
    float Entrada;
    int contador = 0,  /* Variable de control para el bucle*/
          indice = 0,  /* Variable para recorrer los array monedas[] y resto[] */
       monedas[] = {50, 20, 10, 5, 1}, /* Array con las monedas de centimo*/
         resto[5]= {0}, /* array con el resto de las operaciones, se inicializan todos los valores a 0 */
         salario; /* Variable almacena la transformación decimal-entero de la variable Entrada*/

    Entrada = 0.45; /* Variable con valor provisional */
    salario = (int)ceil((Entrada*100) / 1); /* Ej: Si Entrada = 0.45 entonces, salario = 45 */

    printf("%d\n", salario);


    return 0;
}
