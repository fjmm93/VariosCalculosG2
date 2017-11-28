#include <stdio.h>
#include <math.h>

int main( )
{
    float Entrada;
    int contador = 0,  /* Variable de control para el bucle*/
          indice = 0,  /* Variable para recorrer los array monedas[] y resto[] */
       monedas[] = {50, 20, 10, 5, 1}, /* Array con las monedas de centimo*/
          LIMITE = (sizeof(monedas)/sizeof(float)),
         resto[5]= {0}, /* array con el resto de las operaciones, se inicializan todos los valores a 0 */
         salario; /* Variable almacena la transformación decimal-entero de la variable Entrada*/

    Entrada = 0.45; /* Variable con valor provisional */
    salario = (int)ceil((Entrada*100) / 1); /* Ej: Si Entrada = 0.45 entonces, salario = 45 */

    while(contador < LIMITE) {
        resto[indice] = salario / monedas[indice];
        salario = salario - (monedas[indice] * resto[indice]); /* se almacena el valor de la siguiente iteracion*/
            if(resto[indice] != 0){ /* imprimer solo si el resto es diferente de 0 */
                printf("%d monedas de %d\n", resto[indice], monedas[indice]);
            }
        ++contador, ++indice;
    }


    return 0;
}
