//para ingresar valores por consola, usamos la función scanf

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{
    int edad=20;

    printf("Usando '5d:' %5d\n", edad); //Si o si imprime 5 dígitos, si no hay, imprime espacios delante de la variable hasta completar
    printf("Usando '.5d:' %.5d\n", edad); //Si o si imprime 5 digitos, si no hay, imprime ceros delante de la variable hasta completar
    printf("Usando 'e' %e:\n", PI); //escribe en notación científica
    printf("Usando '.2f': %.2f\n ", PI); //marca la cantidad de decimales
    printf("%.2g\n", PI); //Setea la cantidad de digitos de un float

    ////////////////////Secuencias de Escape
    printf("Hola\bMundo\n"); //\b es backspace
    printf("Hola\aMundo\n"); //\a es para hacer sonido de campana de alerta
    printf("Hola\n Mundo\n"); //\n es salto de linea
    printf("Hola \tMundo\n"); //\t es para tabular
    printf("Hola \rMundo\n"); //\r sobrescribe en la misma linea lo que viene luego del \r
    printf("Hola \vMundo\n"); //símbolo género masculino
    printf("Hola \fMundo\n"); //símbolo género femenino
    printf("Hola \\ Mundo\n"); //imprime la barra invertida y permite imprimir comillas simples, o dobles con \' y \"


    printf("*************************************************************************\n");
    printf("Funcion Scanf:\n");
    printf("Ingresa tu edad\n");
    scanf ("%d", &edad); //scanf se fija en la información ingresada y la convierte a la esperada, ignorando espacios, saltos de linea, etc.
    printf("Tu edad es %d\n", edad);



    return 0;
}
