
//Autor Jose Ramon

#include <stdio.h>
#include <ctype.h>
int romanos();
int nif();

int validar (char *numero)
{

    int largo;
    int comp;// comprobante
    largo =strlen(numero);
    comp=0;
    
    for (int i=0; i<largo; ++i){
        if (!isdigit (numero[i])) comp++;
    }
    
    if (comp!=0)
    { printf ("No valido, introduce solo numeros.");
    
    }else{
       if (largo<=4){
           romanos(numero);
           
           
       }   else{
           nif(numero);
           
       }
    }
    
}
