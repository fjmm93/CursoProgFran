#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int nromanos(); //prototipo de nromanos
int nif(); //prototipo de nif

int validar (char *numero){
    
    int largo = strlen(numero);
    int ok = 0;
    for (int i=0; i<largo; i++){
        /*hacemos que "i" se vaya incrementando mientras sea menor que "largo"*/
            if(!isdigit(numero[i])) ok++; 
            /*si algun digito de "numero" es una letra se incrementa el valor de "ok"*/
        }
    if (ok == 0){
        if (largo <= 4){
            nromanos(numero);
        }
        else{
            nif(numero);
        }
    }
    else{
        printf("\nNúmero no válido.\n");
    }
}