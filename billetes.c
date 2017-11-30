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

int CalcularBilletes(void){
    
    //Declaro las variables a usar en el programa
    int resto, sueldo;
    int Billetes[] = {500,200,100,50,20,10,5};
    int monedas[]={2,1}; //A.... he quitado el asterisco delante de billetes y monedas
     //MANUEL monedas de centimo etc
    int operacion500, sueldo500, operacion200, sueldo200, operacion100, sueldo100;//A....dividido entre esta linea y la de abajo
    int  billetes50, billetes20, billetes10, billetes5, monedas2, monedas1, sueldo50, sueldo20, sueldo10, sueldo5, sueldo2, sueldo1;
    printf("Devolucion de nuestro sueldo en billetes y monedas \n");
    
     //A...calculo el sueldo
    printf("Sueldo: \n");
    scanf("%i",&sueldo);  
      //A...operaciones para fraccionar el sueldo en billetes o monedas
    operacion500 = sueldo / 500;
    sueldo500 = operacion500;
     
    operacion200 = sueldo - (operacion500 * 500);
    sueldo200 = operacion200/200;
       
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
            
        //A...si el sueldo es inferior o igual a 6000 se imprime el resultado(de 500 a 50 euros)
    if (sueldo <= 6000){
        printf("El sueldo en billetes de 500 es: %i \n", sueldo500); 
        printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
        printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
        printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
        
    }
    else if(sueldo <50){ //A...si el sueldo es inferior a 50 se imprimen la fraccion del sueldo en billetes y monedas de 50 a 1 euro
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20);
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5);
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
    }
    else{ //A...si no es ninguno de los casos anteriores no es valido
        printf("El sueldo no entra dentro de los valores establecidos \n");
    } 
    
    return 0;
    
    }
