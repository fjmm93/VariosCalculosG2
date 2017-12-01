#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar (char *numero, int modo)
{
    int largo;
    int comp;   //variable que determina si algun caracter es digital. 
    largo = strlen(numero);  //mide la longitud de la cadena.
    comp=0;
    int stop = 0;    
    
    for (int i=0; i<largo; ++i){   //mientras 'i' sea menor que largo y comp sea 0 'i' se ira incrementando de 1 en 1.
            if (!isdigit (numero[i])) comp++;   // si hay alguna letra comp se incrementa.
        }
    
    // Recorremos la cadena (el dato introducido) para comprobar su tipo.
    
    if (modo <=2 && comp != 0){        
            printf ("\nNo válido, introduce sólo números.\n");
            stop = 1;
    }          
    if (comp == 1){ //si solo hay un caracter no numérico.
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

