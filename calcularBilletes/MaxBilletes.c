#include <stdio.h>
#include <stdlib.h>

int MaxBilletes(void){
    
    //Declaro las variables a usar en el programa
    float sueldo;
    int opBilletes500,sueldo500,opBilletes200,sueldo200,opBilletes100,sueldo100;
    int opBilletes50,sueldo50,opBilletes20,sueldo20,opBilletes10,sueldo10,opBilletes5,sueldo5;
    int opMonedas2,sueldo2,opMonedas1,sueldo1,opMonedas05,sueldo05,opMonedas02,sueldo02;
    int opMonedas01,sueldo01,opMonedas005,sueldo005,opMonedas002,sueldo002,opMonedas001,sueldo001;
    
    int cambio; //Variable para el menu
    
    printf("Devolucion de nuestro sueldo en billetes y monedas \n");
    
    //Leo el sueldo que tengo 
    printf("Sueldo: \n");
    scanf("%f",&sueldo); 
    
     while(cambio != 4){
        
        /* 
         * Declaro todas las opciones del menu. En el menu seleccionamos si queremos empezar a hacer el cambio del sueldo 
         * comenzando por los billetes de 500 euros, 200 euros, 100 euros, o 50 euros
         */
        printf("=================================================\n");
        printf("Elige una opcion: \n");
        printf("0.- Cambio de sueldo comenzando por billetes de 500 euros \n");
        printf("1.- Cambio de sueldo comenzando por billetes de 200 euros \n");
        printf("2.- Cambio de sueldo comenzando por billetes de 100 euros \n");
        printf("3.- Cambio de sueldo comenzando por billetes de 50 euros \n");
        printf("4.- Finalizar\n");
        printf("=================================================\n");
    
        scanf("%i",&cambio);//Decimos que elección es equivalente a la opcion del menu que se haya seleccionado
        
        //Función mediante la cual se hacen las operaciones de todo el menu
        switch(cambio){
            
            case 0: //Case 0 = Cambio de sueldo comenzando por billetes de 500 euros")

                printf("El sueldo en billetes de 500 es: %i \n", sueldo500); 
                printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
                printf("El sueldo en monedas de 0.5 es: %i \n", sueldo05);
                printf("El sueldo en monedas de 0.2 es: %i \n", sueldo02);
                printf("El sueldo en monedas de 0.1 es: %i \n", sueldo01);
                printf("El sueldo en monedas de 0.05 es: %i \n", sueldo005);
                printf("El sueldo en monedas de 0.02 es: %i \n", sueldo002);
                printf("El sueldo en monedas de 0.01 es: %i \n", sueldo001);
                
                break;
                
            case 1: //Case 1 = Cambio de sueldo comenzando por billetes de 200 euros")

                printf("El sueldo en billetes de 200 es: %i \n", sueldo200);
                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
                printf("El sueldo en monedas de 0.5 es: %i \n", sueldo05);
                printf("El sueldo en monedas de 0.2 es: %i \n", sueldo02);
                printf("El sueldo en monedas de 0.1 es: %i \n", sueldo01);
                printf("El sueldo en monedas de 0.05 es: %i \n", sueldo005);
                printf("El sueldo en monedas de 0.02 es: %i \n", sueldo002);
                printf("El sueldo en monedas de 0.01 es: %i \n", sueldo001);

                
                break;
                
            case 2: //Case 2 = Cambio de sueldo comenzando por billetes de 100 euros")

                printf("El sueldo en billetes de 100 es: %i \n", sueldo100); 
                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
                printf("El sueldo en monedas de 0.5 es: %i \n", sueldo05);
                printf("El sueldo en monedas de 0.2 es: %i \n", sueldo02);
                printf("El sueldo en monedas de 0.1 es: %i \n", sueldo01);
                printf("El sueldo en monedas de 0.05 es: %i \n", sueldo005);
                printf("El sueldo en monedas de 0.02 es: %i \n", sueldo002);
                printf("El sueldo en monedas de 0.01 es: %i \n", sueldo001);
                
                break;
                
            case 3: //Case 3 = Cambio de sueldo comenzando por billetes de 50 euros")

                printf("El sueldo en billetes de 50 es: %i \n", sueldo50);
                printf("El sueldo en billetes de 20 es: %i \n", sueldo20); 
                printf("El sueldo en billetes de 10 es: %i \n", sueldo10);
                printf("El sueldo en billetes de 5 es: %i \n", sueldo5); 
                printf("El sueldo en monedas de 2 es: %i \n", sueldo2);
                printf("El sueldo en monedas de 1 es: %i \n", sueldo1);
                printf("El sueldo en monedas de 0.5 es: %i \n", sueldo05);
                printf("El sueldo en monedas de 0.2 es: %i \n", sueldo02);
                printf("El sueldo en monedas de 0.1 es: %i \n", sueldo01);
                printf("El sueldo en monedas de 0.05 es: %i \n", sueldo005);
                printf("El sueldo en monedas de 0.02 es: %i \n", sueldo002);
                printf("El sueldo en monedas de 0.01 es: %i \n", sueldo001);
                
                break;
                
            case 4: //Para salir del menu
                
                printf("Hasta la proxima \n");
                
                break;
                
            default:
                break;
        }
    }
    
    return 0;
    
}
