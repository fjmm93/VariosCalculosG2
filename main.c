#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char eleccion;
    int numero, peso, altura;
    float sueldo;
    int rep;
    
    do{
    printf("\nElige una opción:\n");
    printf("\t0.- Finalizar\n");
    printf("\t1.- Calcular letra IMC.\n");
    printf("\t2.- Calcular números romanos.\n");
    printf("\t3.- Calcular billetes.\n");
    
    scanf("%s",&eleccion);
    rep = 0;
        switch (eleccion) {
            case '0':
                printf("\nHas elegido finalizar.");
                break;
            case '1':
                printf("\nHas elegido calcular letra IMC.\n");
                printf("\nEscribe tu peso(kg).\n\n");
                scanf("%i", &peso);
                printf("\nEscribe tu altura(cm).\n\n");
                scanf("%i",&altura);
                rep = 1;
                break;
            case '2':
                printf("\nHas elegido calcular romanos.\n\n");
                printf ("Introduce un número entre 1 y 3500.\n\n");
                scanf ("%i", &numero);
                rep = 1;
                break;
            case '3':
                printf("\nHas elegido calcular los billetes.\n\n");
                printf("Introduce tu sueldo.\n\n");
                scanf("%f",&sueldo);
                rep = 1;
                break;
            default:    //opcion que usa si no es ninguna de las anteriores
                printf("\nOpción no válida.\n");
                rep = 1;
                break;
            }
    }while(rep!=0);
}