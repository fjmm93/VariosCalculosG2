#include <stdio.h>
#include <stdlib.h>

int CalcularBilletes(); //LLama a la función CalcularBilletes en la cual se encuentran las operaciones a realizar

int MaxBilletes(char *sueldo){
    
    //Declaro las variables a usar en el programa
/*
    int opBilletes500,sueldo500,opBilletes200,sueldo200,opBilletes100,sueldo100;
    int opBilletes50,sueldo50,opBilletes20,sueldo20,opBilletes10,sueldo10,opBilletes5,sueldo5;
    int opMonedas2,sueldo2,opMonedas1,sueldo1,opMonedas05,sueldo05,opMonedas02,sueldo02;
    int opMonedas01,sueldo01,opMonedas005,sueldo005,opMonedas002,sueldo002,opMonedas001,sueldo001;
*/
    
    int cambio; //Variable para el menu
    cambio = 0;
    
    printf("\nDevolucion de nuestro sueldo en billetes y monedas \n\n");
    
     while(cambio != 4){ //mientras cambio sea distinto de 4 se repite todo.
        
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
        printf("=================================================\n\n");

        scanf("%i",&cambio);//Decimos que elección es equivalente a la opcion del menu que se haya seleccionado
       
        CalcularBilletes(sueldo, cambio); // ejecuta la funcion calcularbilletes
    }      //se le da las variables sueldo (para calculos) y cambio (para desglosar a partir del billete elegido)
}

