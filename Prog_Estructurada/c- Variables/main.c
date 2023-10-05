//En C es necesario indicar qué tipo de dato almacenará la variable

#include <stdio.h>
//Podemos definir constantes en el encabezado, de la siguiente manera
#define CONSTANTE 120
//Cuando queremos definir una constante decimal, debemos agregar la f al final
#define PI 3.14f

int main()
{
    int edad = 5; //variable entera
    float sueldo = 20.5; //variable decimal
    //Para poder imprimir estas variables, es necesario indicar el tipo de dato %d para enteros %f para decimales. %.2f limita el numero de decimales a 2
    printf("La edad es %d y el sueldo es de %.2f\n", edad,sueldo);
    printf("La constante tienen el valor de: %d\n", CONSTANTE);
    printf("El valor de pi es: %.2f\n", PI);


    return 0;
}
