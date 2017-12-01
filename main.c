#include <stdio.h>
#include <stdlib.h>

int validar();
int CalcularBilletes();
int MaxBilletes();
int romanos();
int Imc();

int main() {
    
    char eleccion;
    char numero[20];
    char peso[20];
    char altura[20];
    char sueldo[20];
    int rep, modo, prueba;
    
    do{
    printf("\nElige una opción:\n");
    printf("\t0.- Finalizar\n");
    printf("\t1.- Calcular IMC.\n");
    printf("\t2.- Calcular números romanos.\n");
    printf("\t3.- Calcular billetes.\n");
    
    scanf("%s",&eleccion);
    rep = 0;    //variable que se usa para repetir el bucle.
        switch (eleccion) {
            case '0':
                printf("\nHas elegido finalizar.");
                break;
            case '1':
                printf("\nHas elegido calcular IMC.\n");
                do{
                modo = 3;//A...cuando coge 3 el programa acepta la coma. variable que indica que tipo de validacion se realiza.
                printf("\nEscribe tu peso(kg).\n\n");
                scanf("%s", &peso);
                prueba = validar(peso, modo);//se llama a la funcion validar y se le da los valores peso y modo.
                }while(prueba != 0);    //si la funcion validar devuelve un valor distinto de 0 repite el proceso.
                                        //la funcion validar solo devuelve 0 cuando no hay ninguna letra.
                do{ 
                modo = 1;//A.. al escoger 1 o 2 (en el modo) la coma no la leeria
                printf("\nEscribe tu altura(cm).\n\n");
                scanf("%s",&altura);
                prueba = validar(altura, modo);
                }while(prueba != 0);
                Imc(peso, altura);
                rep = 1;
                break;
            case '2':
                printf("\nHas elegido calcular romanos.\n\n");
                do{
                modo = 2;
                printf ("Introduce un número entre 1 y 3500.\n\n");
                scanf ("%s", &numero);
                prueba = validar(numero, modo);
                }while(prueba != 0);
                int num;
                num = atoi(numero);
                romanos(num);
                rep = 1;
                break;
            case '3':
                printf("\nHas elegido calcular los billetes.\n\n");
                do{
                modo = 3;
                printf("Introduce tu sueldo.\n\n");
                scanf("%s",&sueldo);
                prueba = validar(sueldo, modo);
                }while(prueba != 0);
                MaxBilletes(sueldo);
                rep = 1;
                break;
            default:    //opcion que usa si no es ninguna de las anteriores
                printf("\nOpción no válida.\n");
                rep = 1;
                break;
            }
    }while(rep!=0);     //se repite el bucle mientras rep sea distinto de 0.
}