//La memoria principal est� separada en segmentos de bytes capaz de almacenar 8 bits de informaci�n. Cada byte tiene una direcci�n �nica que la distingue de los dem�s bloques de memoria.


#include <stdio.h>
#include <stdlib.h>

int main()
{

    //para declarar punteros antecedemos un asterisco al nombre de la variable
    int var = 5, *p = &var; //puntero a variable entera
    double *q; //puntero a double
    char *r ;//puntero a char

    printf("%d\n", *p);

    //al cambiar el valor en var tambi�n cambia en lo que muestre *p
    var = 6;
    printf("Nuevo valor de *p = %d\n", *p);
    //y viceversa
    *p = 8;
    printf("Nuevo valor de var = %d", var);


    return 0;
}
