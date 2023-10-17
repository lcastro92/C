//La memoria principal está separada en segmentos de bytes capaz de almacenar 8 bits de información. Cada byte tiene una dirección única que la distingue de los demás bloques de memoria.


#include <stdio.h>
#include <stdlib.h>

void max_min (int vector[], int longitud, int *maximo, int *minimo);

int main()
{

    //para declarar punteros antecedemos un asterisco al nombre de la variable
    int var = 5, *p = &var, vector[]={7,2,0,-2,50}, minimo, maximo; //puntero a variable entera
    double *q; //puntero a double
    char *r ;//puntero a char

    printf("%d\n", *p);

    //al cambiar el valor en var también cambia en lo que muestre *p
    var = 6;
    printf("Nuevo valor de *p = %d\n", *p);
    //y viceversa
    *p = 8;
    printf("Nuevo valor de var = %d\n", var);

    max_min(vector, 5, &maximo, &minimo);
    printf("El maximo es %d\n", maximo);
    printf("El minimo es %d\n", minimo);
    return 0;
}


void max_min (int vector[], int longitud, int *maximo, int *minimo){
    for (int i = 0; i < longitud; i++){
        if (*maximo < vector[i])
                //printf("Nuevo máximo: %d", vector[i]);
                *maximo = vector[i];
        if (*minimo > vector[i])
                *minimo = vector[i];
    }

}


