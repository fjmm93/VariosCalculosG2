#include <stdio.h>
#include <stdlib.h>

int CalcularBilletes(void){
    
    //Declaro las variables a usar en el programa
    int billetes[]={500,200,100,50};
    int monedas[]={2,1};
    float sueldo;
    int opBilletes500,billetes500,opBilletes200,billetes200,opBilletes100,billetes100,opBilletes50,billetes50;
    
    printf("Devolucion de nuestro sueldo en billetes y monedas \n");
    
    //Leo el sueldo que tengo 
    printf("Sueldo: \n");
    scanf("%i",&sueldo);  
   
    //Operacion para calcular los billetes de 500
    opBilletes500 = sueldo / 500;
    billetes500 = opBilletes500;
    
    //Operacion para calcular los billetes de 200
    opBilletes200 = sueldo - (opBilletes500 * 500);
    billetes200 = opBilletes200/200;
    
    //Operacion para calcular los billetes de 100
    opBilletes100 = opBilletes200 - (billetes200 * 200);
    billetes100 = opBilletes100/100;
    
    //Operacion para calcular los billetes de 50
    opBilletes50 = opBilletes100 + (billetes100 * 100);
    billetes50 = opBilletes50/50;
       
    if (sueldo <= 6000){
        printf("El sueldo en billetes de 500 es: %i \n", billetes500); 
        printf("El sueldo en billetes de 200 es: %i \n", billetes200);
        printf("El sueldo en billetes de 100 es: %i \n", billetes100); 
        printf("El sueldo en billetes de 50 es: %i \n", billetes50);
    }
    else if(sueldo <50){
        printf("Turno de Alex \n");
    }
    else{
        printf("El sueldo no entra dentro de los valores establecidos \n");
    } 
    
    return 0;
    
}