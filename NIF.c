#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int nif(char *numero) {
    
    int dni, resultado;
    dni = atoi(numero);
    
    resultado = dni % 23;

    char*letra [23];
    letra[0]="T";
    letra[1]="R";
    letra[2]="W";
    letra[3]="A"; 
    letra[4]="G";
    letra[5]="M";
    letra[6]="Y";
    letra[7]="F";
    letra[8]="P";
    letra[9]="D";
    letra[10]="X";
    letra[11]="B";
    letra[12]="N";
    letra[13]="J";
    letra[14]="Z";
    letra[15]="S";
    letra[16]="Q";
    letra[17]="V";
    letra[18]="H";
    letra[19]="L";
    letra[20]="C";
    letra[21]="K";
    letra[22]="E";
    printf("\n\nTu letra es: %s\n",letra[resultado]);
}

