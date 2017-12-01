#include <stdio.h>
#include <stdlib.h>
#include "MonedasCent.h"
#include <math.h>

int CalcularBilletes(char *sueldo, int cambio){
    
    float sueldodecimal;
    sueldodecimal = atof(sueldo); //pasamos la cadena de caracteres 'sueldo' a float
    int sueldoentero, centimos;
    sueldoentero = atoi(sueldo);  //pasamos la cadena de caracteres 'sueldo' a entero
    centimos = (int) ceilf((sueldodecimal  -  sueldoentero) * 100);

    //Variable en la que indicamos el sueldo
    int opBilletes500,sueldo500,opBilletes200,sueldo200,opBilletes100,sueldo100;
    int opBilletes50,sueldo50,opBilletes20,sueldo20,opBilletes10,sueldo10,opBilletes5,sueldo5;
    
    int opMonedas2,sueldo2,opMonedas1,sueldo1;
    
    printf("\nEl sueldo se divide en:\n");
    
        //Función mediante la cual se hacen las operaciones de todo el menu
        switch(cambio){  //la variable cambio especifica a partir de que billete desglosamos el sueldo.
            case 0: //Case 0 = Cambio de sueldoentero comenzando por billetes de 500 euros")
                
                //Operacion para calcular los billetes de 500
                opBilletes500 = sueldoentero / 500;
                sueldo500 = opBilletes500;
    
                //Operacion para calcular los billetes de 200
                opBilletes200 = sueldoentero - (opBilletes500 * 500);
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

                printf("\n%i billete/s de 500€\n", sueldo500); 
                printf("%i billete/s de 200€\n", sueldo200);
                printf("%i billete/s de 100€\n", sueldo100); 
                printf("%i billete/s de 50€\n", sueldo50);
                printf("%i billete/s de 20€\n", sueldo20); 
                printf("%i billete/s de 10€\n", sueldo10);
                printf("%i billete/s de 5€\n", sueldo5); 
                printf("%i moneda/s de 2€\n", sueldo2);
                printf("%i moneda/s de 1€\n", sueldo1);
                monedas(centimos);
                break;
                
            case 1: //Case 1 = Cambio de sueldoentero comenzando por billetes de 200 euros")
                
                //Operacion para calcular los billetes de 200
                opBilletes200 = sueldoentero / 200;
                sueldo200 = opBilletes200;
    
                //Operacion para calcular los billetes de 100
                opBilletes100 = sueldoentero - (opBilletes200 * 200);
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
 
                printf("%i billete/s de 200€\n", sueldo200);
                printf("%i billete/s de 100€\n", sueldo100); 
                printf("%i billete/s de 50€\n", sueldo50);
                printf("%i billete/s de 20€\n", sueldo20); 
                printf("%i billete/s de 10€\n", sueldo10);
                printf("%i billete/s de 5€\n", sueldo5); 
                printf("%i moneda/s de 2€\n", sueldo2);
                printf("%i moneda/s de 1€\n", sueldo1);
                monedas(centimos);
                break;
            case 2: //Case 2 = Cambio de sueldoentero comenzando por billetes de 100 euros")
                
                //Operacion para calcular los billetes de 100
                opBilletes100 = sueldoentero / 100;
                sueldo100 = opBilletes100;
    
                //Operacion para calcular los billetes de 50
                opBilletes50 = sueldoentero - (opBilletes100 * 100);
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

                printf("%i billete/s de 100€\n", sueldo100); 
                printf("%i billete/s de 50€\n", sueldo50);
                printf("%i billete/s de 20€\n", sueldo20); 
                printf("%i billete/s de 10€\n", sueldo10);
                printf("%i billete/s de 5€\n", sueldo5); 
                printf("%i moneda/s de 2€\n", sueldo2);
                printf("%i moneda/s de 1€\n", sueldo1);
                monedas(centimos);
                break;
                
            case 3: //Case 2 = Cambio de sueldoentero comenzando por billetes de 50 euros")
                
                //Operacion para calcular los billetes de 500
                opBilletes50 = sueldoentero / 50;
                sueldo50 = opBilletes50;
    
                //Operacion para calcular los billetes de 20
                opBilletes20 = sueldoentero - (opBilletes50 * 50);
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

                printf("%i billete/s de 50€\n", sueldo50);
                printf("%i billete/s de 20€\n", sueldo20); 
                printf("%i billete/s de 10€\n", sueldo10);
                printf("%i billete/s de 5€\n", sueldo5); 
                printf("%i moneda/s de 2€\n", sueldo2);
                printf("%i moneda/s de 1€\n", sueldo1);
                monedas(centimos);
                break;
            case 4:
                printf("\nHasta la proxima \n");
                break;
            default:
                break;
        }
    }
