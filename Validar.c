
//Autor Jose Ramon

#include <stdio.h>
#include <ctype.h>
int RomanoIMC(); // Falta realizar el archivo RomanoIMC.c
int nif(); // // Falta realizar el archivo nif.c

int Validar (char *numero) // Declaramos la función como puntero
{

    int largo;
    int comp; // Esto es para comprobar si es dato es válido
    largo =strlen(numero); // strlen recoge la longitud del dato introducido
    comp=0;
    
    // Recorremos la cadena (el dato introducido) para comprobar su tipo
    for (int i=0; i<largo; ++i)
    {
        if (!isdigit (numero[i])) comp++;
    }
    
    if (comp!=0)
    { printf ("Dato introducido no válido, introduce un número.");
    
    }
    else
    {
       if (largo<=4)
       {
           RomanoIMC(numero);
           
           
       }   else
       {
           nif(numero);
           
       }
    }
}