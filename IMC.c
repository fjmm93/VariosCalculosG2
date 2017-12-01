#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Imc(char *peso, char *altura){
    
    float operacion, pesofloat, alturafloat;
    
    pesofloat = atof(peso);
    alturafloat = atof(altura);
    
    operacion = pesofloat / ((alturafloat / 100) * (alturafloat / 100)); 
    
    printf("IMC es: %0.2f \n",operacion); 
    
    if (operacion < 16.00){
        printf("Infrapeso: Delgadez Severa \n");
    }
    else if((operacion >= 16.00) && (operacion <17.00)){
        printf("Infrapeso: Delgadez moderada\n");  
    }
    else if((operacion >= 17.00) && (operacion <18.50)){
        printf("Infrapeso: Delgadez aceptable\n");  
    }
    else if((operacion >= 18.50) && (operacion <25.00)){
        printf("Peso Normal\n");  
    }
    else if((operacion >= 25.00) && (operacion <30.00)){
        printf("Sobrepeso\n");  
    }
    else if((operacion >= 30.00) && (operacion <35.00)){
        printf("Obeso: Tipo I\n");  
    }
    else if((operacion >= 35.00) && (operacion <=40.00)){
        printf("Obeso: Tipo II\n");  
    }
    else if(operacion >40.00){
        printf("Obeso: Tipo III\n");  
    }
    else{
        printf("Valores erroneos\n");
    }
    
    return 0;
    
}
