#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Centimos.h"

int main(void){
    
    int centimos =0, sueldo = 0; /* -Vincent- Cre� la variable centimos */
    float entrada; /* -Vincent- cre� la variable entrada */
    int Billetes[] = {500,200,100,50,20,10,5};
    
    int opBilletes500,sueldo500,opBilletes200,sueldo200,opBilletes100,sueldo100;
    int opBilletes50,sueldo50,opBilletes20,sueldo20,opBilletes10,sueldo10,opBilletes5,sueldo5;
    
    int opMonedas2,sueldo2,opMonedas1,sueldo1,opMonedas05,sueldo05,opMonedas02,sueldo02;
    int opMonedas01,sueldo01,opMonedas005,sueldo005,opMonedas002,sueldo002,opMonedas001,sueldo001;
    
    printf("Devolucion de sueldo en billetes y monedas \n");
    //Leo el sueldo que tengo 
    printf("Sueldo: \n");
    scanf("%f",&entrada); /* -Vincent- modifique el scanf, usando la variable entrada decimal Ej: 500.46*/
    sueldo = (int) truncf(entrada); /* -Vincent- Se almacena en sueldo el numero entero 500*/
    centimos = (int) ceilf((entrada  -  sueldo) * 100); /* -Vincent- Se almacena en centios el numero entero 46*/

    int cambio; //Variable para el menu 
    
    while(cambio != 4){
    
       //Declaro todas las opciones del menu
        printf("=================================================\n");
        printf("Elige una opcion: \n");
        printf("0.- Cambio de sueldo en billetes de 500 euros \n");
        printf("1.- Cambio de sueldo en billetes de 200 euros \n");
        printf("2.- Cambio de sueldo en billetes de 100 euros \n");
        printf("3.- Cambio de sueldo en billetes de 50 euros \n");
        printf("4.- Finalizar\n");
        printf("=================================================\n");
    
        scanf("%i",&cambio);//Decimos que elecci�n es equivalente a la opcion del menu que se haya seleccionado
    
        //Funci�n mediante la cual se hacen las operaciones de todo el menu
        switch(cambio){
            case 0: //Case 0 = Cambio de sueldo comenzando por billetes de 500 euros")
                
                //Operacion para calcular los billetes de 500
                opBilletes500 = sueldo / 500;
                sueldo500 = opBilletes500;
    
                //Operacion para calcular los billetes de 200
                opBilletes200 = sueldo - (opBilletes500 * 500);
                sueldo200 = opBilletes200/200;
    
                //Operacion para calcular los billetes de 100
                opBilletes100 = opBilletes200 - (sueldo200 * 200);
                sueldo100 = opBilletes100/100;
    
                //Operacion para calcular los billetes de 50
                opBilletes50 = opBilletes100 - (sueldo100 * 100);
                sueldo50 = opBilletes50/50;
    
                //Operacion para calcular los billetes de 20
                opBilletes20 = opBilletes50 - (sueldo50 * 50);
                sueldo20 = opBilletes20/20;
    
                //Operacion para calcular los billetes de 10
                opBilletes10 = opBilletes20 - (sueldo20 * 20);
                sueldo10 = opBilletes10/10;
    
                //Operacion para calcular los billetes de 5
                opBilletes5 = opBilletes10 - (sueldo10 * 10);
                sueldo5 = opBilletes5/5;
    
                //Operacion para calcular las monedas de 2 euro
                opMonedas2 = opBilletes5 - (sueldo5 * 5);
                sueldo2 = opMonedas2/2;
    
                //Operacion para calcular las monedas de 1 euro
                opMonedas1 = opMonedas2 - (sueldo2 * 2);
                sueldo1 = opMonedas1/1;

                printf("El sueldo en billetes de 500 es: %i \n", sueldo500); 
                printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en billetes de 2 es: %i \n", sueldo2);
                printf("El sueldo en billetes de 1 es: %i \n", sueldo1);
                monedas(centimos);
                
                break;
                
            case 1: //Case 1 = Cambio de sueldo comenzando por billetes de 200 euros")
                
                //Operacion para calcular los billetes de 200
                opBilletes200 = sueldo / 200;
                sueldo200 = opBilletes200;
    
                //Operacion para calcular los billetes de 100
                opBilletes100 = sueldo - (opBilletes200 * 200);
                sueldo100 = opBilletes100/100;
    
                //Operacion para calcular los billetes de 50
                opBilletes50 = opBilletes100 - (sueldo100 * 100);
                sueldo50 = opBilletes50/50;
    
                //Operacion para calcular los billetes de 20
                opBilletes20 = opBilletes50 - (sueldo50 * 50);
                sueldo20 = opBilletes20/20;
    
                //Operacion para calcular los billetes de 10
                opBilletes10 = opBilletes20 - (sueldo20 * 20);
                sueldo10 = opBilletes10/10;
    
                //Operacion para calcular los billetes de 5
                opBilletes5 = opBilletes10 - (sueldo10 * 10);
                sueldo5 = opBilletes5/5;
    
                //Operacion para calcular las monedas de 2 euro
                opMonedas2 = opBilletes5 - (sueldo5 * 5);
                sueldo2 = opMonedas2/2;
    
                //Operacion para calcular las monedas de 1 euro
                opMonedas1 = opMonedas2 - (sueldo2 * 2);
                sueldo1 = opMonedas1/1;

                printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en billetes de 2 es: %i \n", sueldo2);
                printf("El sueldo en billetes de 1 es: %i \n", sueldo1);
                monedas(centimos);
                break;
            case 2: //Case 2 = Cambio de sueldo comenzando por billetes de 100 euros")
                
                //Operacion para calcular los billetes de 100
                opBilletes100 = sueldo / 100;
                sueldo100 = opBilletes100;
    
                //Operacion para calcular los billetes de 50
                opBilletes50 = sueldo - (opBilletes100 * 100);
                sueldo50 = opBilletes50/50;
    
                //Operacion para calcular los billetes de 20
                opBilletes20 = opBilletes50 - (sueldo50 * 50);
                sueldo20 = opBilletes20/20;
    
                //Operacion para calcular los billetes de 10
                opBilletes10 = opBilletes20 - (sueldo20 * 20);
                sueldo10 = opBilletes10/10;
    
                //Operacion para calcular los billetes de 5
                opBilletes5 = opBilletes10 - (sueldo10 * 10);
                sueldo5 = opBilletes5/5;
    
                //Operacion para calcular las monedas de 2 euro
                opMonedas2 = opBilletes5 - (sueldo5 * 5);
                sueldo2 = opMonedas2/2;
    
                //Operacion para calcular las monedas de 1 euro
                opMonedas1 = opMonedas2 - (sueldo2 * 2);
                sueldo1 = opMonedas1/1;

                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en billetes de 2 es: %i \n", sueldo2);
                printf("El sueldo en billetes de 1 es: %i \n", sueldo1);
                monedas(centimos);
                break;
                
            case 3: //Case 2 = Cambio de sueldo comenzando por billetes de 50 euros")
                
                //Operacion para calcular los billetes de 500
                opBilletes50 = sueldo / 50;
                sueldo50 = opBilletes50;
    
                //Operacion para calcular los billetes de 20
                opBilletes20 = sueldo - (opBilletes50 * 50);
                sueldo20 = opBilletes20/20;
                        
    
                //Operacion para calcular los billetes de 10
                opBilletes10 = opBilletes20 - (sueldo20 * 20);
                sueldo10 = opBilletes10/10;
    
                //Operacion para calcular los billetes de 5
                opBilletes5 = opBilletes10 - (sueldo10 * 10);
                sueldo5 = opBilletes5/5;
    
                //Operacion para calcular las monedas de 2 euro
                opMonedas2 = opBilletes5 - (sueldo5 * 5);
                sueldo2 = opMonedas2/2;
    
                //Operacion para calcular las monedas de 1 euro
                opMonedas1 = opMonedas2 - (sueldo2 * 2);
                sueldo1 = opMonedas1/1;

                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en billetes de 2 es: %i \n", sueldo2);
                printf("El sueldo en billetes de 1 es: %i \n", sueldo1);
                monedas(centimos);
                break;
            case 4:
                printf("Hasta la proxima \n");
                break;
            default:
                break;
        }
    }
    
    return 0;
    
}    
