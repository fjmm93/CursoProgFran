#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validar();

int main() {
    
    int eleccion;
    char numero[20];
    
    do{
    printf("\nElige una opción:\n");
    printf("\t0.- Finalizar\n");
    printf("\t1.- Calcular letra NIF.\n");
    printf("\t2.- Calcular números romanos.\n");
    
    scanf("%i",&eleccion);
        switch (eleccion) {
            case 0:
                printf("\nHas elegido finalizar.");
                break;
            case 1:
                printf("\nHas elegido calcular letra NIF.\n\n");
                printf("\nEscribe tu número de DNI (mínimo 5 dígitos).\n\n");
                scanf("%s", &numero);
                validar(numero);
                break;
            case 2:
                printf("\nHas elegido calcular romanos.\n\n");
                printf ("Introduce un número entre 1 y 3000.\n\n");
                scanf ("%s", &numero);
                validar(numero);
                break;
            default:    //opcion que usa si no es ninguna de las anteriores
                printf("\nOpción no válida.\n");
                break;
            }
    }while(eleccion!=0);
}


