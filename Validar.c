#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar (char *numero, int modo)
{
    int largo;
    int comp;   //variable que determina si algun caracter es digital. 
    largo = strlen(numero);  //mide la longitud de la cadena.
    comp=0;
    int stop = 0;    //variable que permite volver a pedir el numero (en main) mientras haya alguna letra (con 0 no repite con 1 si)
    
    // Recorremos la cadena (el dato introducido) para comprobar su tipo.
    for (int i=0; i<largo; ++i){   //mientras 'i' sea menor que largo y comp sea 0 'i' se ira incrementando de 1 en 1.
            if (!isdigit (numero[i])) comp++;   // si hay alguna letra comp se incrementa.
    }
    
    if (modo <=2 && comp != 0){        //si modo es menor o igual a 2 y comp es distinto de 0 da error.
            printf ("\nNo válido, introduce sólo números.\n");
            stop = 1;
    }          
    else {
        
        if (comp < 2){ //si solo hay un caracter no numérico.
        for (int i=0; i<largo && comp == 0; ++i){   //mientras 'i' sea menor que largo y comp sea 0 'i' se ira incrementando de 1 en 1.
            if (numero[i] == '.'){   //comprueba si ese caracter es la coma. 
            comp = 0;       //si es la coma comp vuelve a 0 y no da fallo.
            }
        }
        }
        else {
            printf ("\nNo válido, introduce sólo números.\n\n");
            stop = 1;
        }
    return stop;
    }
}
