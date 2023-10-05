//para ingresar valores por consola, usamos la función scanf

#include <stdio.h>
#define PI 3.1416
int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf ("%d", &edad); //scanf necesita que se le indique qué tipo de dato se va a ingresar %d para int, %c para char y %f para float
    printf("Tu edad es %d\n", edad);
    printf("Usando '5d:' %5d\n", edad); //Si o si imprime 5 dígitos, si no hay, imprime espacios delante de la variable hasta completar
    printf("Usando '.5d:' %.5d\n", edad); //Si o si imprime 5 digitos, si no hay, imprime ceros delante de la variable hasta completar
    printf("Usando 'e' %e:\n", PI); //escribe en notación científica
    printf("Usando '.2f': %.2f\n ", PI); //marca la cantidad de decimales
    printf("%.2g", PI); //Setea la cantidad de digitos de un float


    return 0;
}
