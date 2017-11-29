// vincent © 2017
int monedas(int); /* prototipo de la funcion monedas*/

int monedas(int salario)
{
    int    contador = 0;  /* Variable de control para el bucle*/
    int      indice = 0;  /* Variable para recorrer los array monedas[] y resto[] */
    int   monedas[] = {50, 20, 10, 5, 2, 1}; /* Array con las monedas de centimo*/
    int      LIMITE = (sizeof(monedas)/sizeof(float)); /* Tamaño del array monedas[] */
    int     resto[5]= {0}; /* array con el resto de las operaciones, se inicializan todos los valores a 0 */

    while(contador < LIMITE) {
        resto[indice] = salario / monedas[indice];
        salario = salario - (monedas[indice] * resto[indice]); /* se almacena el valor de la siguiente iteracion*/
            if(resto[indice] != 0){ /* imprimir solo si el resto es diferente de 0 */
                printf("%d monedas de %d\n", resto[indice], monedas[indice]);
            }
        ++contador, ++indice;
    }

    return 0;
}
