#include <stdio.h>
#include <stdlib.h>

int validar();

int main() {
    
    char eleccion;
    char numero[20];
    char peso[20];
    char altura[20];
    char sueldo[20];
    int rep, modo;
    
    do{
    printf("\nElige una opción:\n");
    printf("\t0.- Finalizar\n");
    printf("\t1.- Calcular IMC.\n");
    printf("\t2.- Calcular números romanos.\n");
    printf("\t3.- Calcular billetes.\n");
    
    scanf("%s",&eleccion);
    rep = 0; //variable para repetir el bucle.
        switch (eleccion) {
            case '0':
                printf("\nHas elegido finalizar.");
                break;
            case '1':
                modo = 2; //variable para determinar que modo de validacion se usa.
                printf("\nHas elegido calcular IMC.\n");
                printf("\nEscribe tu peso(kg).\n\n");
                scanf("%s", &peso);
                validar(peso, modo);
                printf("\nEscribe tu altura(cm).\n\n");
                scanf("%s",&altura);
                modo = 1;
                validar(altura, modo);
                rep = 1;
                break;
            case '2':
                modo = 1;
                printf("\nHas elegido calcular romanos.\n\n");
                printf ("Introduce un número entre 1 y 3500.\n\n");
                scanf ("%s", &numero);
                validar(numero, modo);
                rep = 1;
                break;
            case '3':
                modo = 2;
                printf("\nHas elegido calcular los billetes.\n\n");
                printf("Introduce tu sueldo.\n\n");
                scanf("%s",&sueldo);
                validar(sueldo, modo);
                rep = 1;
                break;
            default:    //opcion que usa si no es ninguna de las anteriores.
                printf("\nOpción no válida.\n");
                rep = 1;
                break;
            }
    }while(rep!=0); //repite el bucle mientras rep sea distinto de 0.
}