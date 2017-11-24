#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int nromanos(char *numero) {
    
    int num = atoi(numero); 
    int m, c, d, u;
    
    if(num >0 && num <= 3000){
        m = num / 1000;
        num = num - m * 1000;
        c = num / 100;
        num = num - c * 100;
        d = num / 10;
        num = num - d * 10;
        u = num;
                
        char*ma[4] = {"","M","MM","MMM"};
        char*ca[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        char*da[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        char*ua[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        printf ("\nTu número en romano es: %s%s%s%s\n", ma[m],ca[c],da[d],ua[u]);
    }
    else{
        printf("\nNúmero no válido.\n");
    }
}