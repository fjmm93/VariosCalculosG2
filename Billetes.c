/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Programación
 *
 * Created on 28 de noviembre de 2017, 12:42
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "centimos.h"
int main(void){
    
    //Declaro las variables a usar en el programa
    int centimos =0, sueldo = 0; /* -Vincent- Creé la variable centimos */
    float entrada; /* -Vincent- creé la variable entrada */
    int Billetes[] = {500,200,100,50,20,10,5};
    int operacion500, sueldo500, operacion200, sueldo200, operacion100, sueldo100;//A....dividido entre esta linea y la de abajo
    int  billetes50, billetes20, billetes10, billetes5, monedas2, monedas1, sueldo50, sueldo20, sueldo10, sueldo5, sueldo2, sueldo1;
    printf("Devolucion de nuestro sueldo en billetes y monedas \n");
    
    //Leo el sueldo que tengo 
    printf("Sueldo: \n");
    scanf("%f",&entrada); /* -Vincent- modifique el scanf, usando la variable entrada decimal Ej: 500.46*/
    sueldo = (int) truncf(entrada); /* -Vincent- Se almacena en sueldo el numero entero 500*/
    centimos = (int) ceilf((entrada  -  sueldo) * 100); /* -Vincent- Se almacena en centios el numero entero 46*/


      //Operacion para calcular los billetes de 500
    operacion500 = sueldo / 500;
    sueldo500 = operacion500;
     //Operacion para calcular los billetes de 200
    operacion200 = sueldo - (operacion500 * 500);
    sueldo200 = operacion200/200;
       //Operacion para calcular los billetes de 100
    operacion100 = sueldo - (operacion200 * 200);
    sueldo100 = operacion100/100;
    
    billetes50 = sueldo - (operacion100 * 100);
    sueldo50 = operacion100/100;
    
    billetes20 = sueldo - (billetes50 * 50);
    sueldo20 = billetes50;
    
    billetes10 = sueldo - (billetes20 * 20);
    sueldo10 = billetes20;
    
    billetes5 = sueldo - (billetes10 * 10);
    sueldo5 = billetes5;
    
    monedas2 = sueldo - (billetes5 * 5);
    sueldo2 = monedas2;
    
    monedas1 = sueldo - (monedas2 * 2);
    sueldo1 = monedas1;
            
        
    if (sueldo <= 6000){
        printf("El sueldo en billetes de 500 es: %i \n", sueldo500); 
        printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
        printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
        printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
        
    }
    else if(sueldo <50){
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20);
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5);
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
    }
    else{
        printf("El sueldo no entra dentro de los valores establecidos \n");
    } 

    monedas(centimos);
    return 0;
    
}