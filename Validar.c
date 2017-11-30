#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar (char *numero, int modo)
{
    int largo;
    int comp;   //variable que determina si algun caracter es digital. 
    largo = strlen(numero);  //mide la longitud de la cadena.
    comp=0;
    int stop; //funcion que para la ejecucion si hay alguna letra.
    

    // Recorremos la cadena (el dato introducido) para comprobar su tipo.
    if (modo <=2)
        {
        for (int i=0; i<largo && comp == 0; ++i){   //mientras 'i' sea menor que largo y comp sea 0 'i' se ira incrementando de 1 en 1.
            if (!isdigit (numero[i])) comp++;   // si hay alguna letra comp se incrementa.
        }
    
        if (comp!=0)
        { 
            printf ("\nNo válido, introduce sólo números.\n");
        }    

        }
    else
    {
        for (int i=0; i<largo; ++i)
        {
            if (!isdigit (numero[i])) comp++;
            if (comp == 1)
            {                           //si solo hay un caracter no numérico.
                if (numero[i] == '.')   //comprueba si ese caracter es la coma.
                { 
                    comp = 0;       //si es la coma comp vuelve a 0 y no da fallo.
                }
                else 
                {
                    printf ("\nNo válido, introduce sólo números.\n");
                }
            }
        }
    }
}
