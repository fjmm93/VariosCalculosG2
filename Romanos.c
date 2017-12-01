#include <stdio.h>
#include <math.h>


int romanos(int num){
    
    int U,D,C,M;
    
    // se establece un array con una tabla de valores
    
    char *numR[4][10]; 
    
    numR[3][3]="MMM";
    numR[3][2]="MM";
    numR[3][1]="M";
    numR[3][0]="";
    
    numR[2][9]="CM";
    numR[2][8]="DCCC";
    numR[2][7]="DCC";
    numR[2][6]="DC";
    numR[2][5]="D";
    numR[2][4]="CD";
    numR[2][3]="CCC";
    numR[2][2]="CC";
    numR[2][1]="C";
    numR[2][0]="";
    
    numR[1][8]="XC";
    numR[1][7]="LXX";
    numR[1][6]="LX";
    numR[1][5]="L";
    numR[1][4]="XL";
    numR[1][3]="XXX";
    numR[1][2]="XX";
    numR[1][1]="X";
    numR[1][0]="";
    
    
    numR[0][9]="IX";
    numR[0][8]="VIII";
    numR[0][7]="VII";
    numR[0][6]="VI";
    numR[0][5]="V";
    numR[0][4]="IV";
    numR[0][3]="III";
    numR[0][2]="II";
    numR[0][1]="I";
    numR[0][0]="";
    
    U = num%10;         //obtenemos unidades
    D = (num/10)%10;    //obtenemos decenas
    C = (num/100)%10;   //obtenemos centenas
    M = (num/1000)%10;  //obtenemos millares
    
    //si el numero es mayor de 3500 o menor de 0 imprime el mensaje
    
    if (num > 3500 ){
        printf("\nNumeros superiores a 3500 no son validos \n");
    }
    else if(num <0){
        printf("\nNumeros inferiores a cero no son validos \n");
    }
    else{                                               //busca la posicion en la tabla del numero romano y lo imprime por pantalla
        printf("\nEl numero en romano es: %s%s%s%s \n",numR[3][M],numR[2][C],numR[1][D],numR[0][U]); 
    }
    
    return 0;
}

