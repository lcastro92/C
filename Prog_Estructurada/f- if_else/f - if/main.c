//operadores de comparaci�n
    // < menor que
    // > mayor que
    // <= menor igual que
    // >= mayor igual que
    // == igual que
    // != diferente que

    //operadores l�gicos
    // ! negaci�n l�gica
    // && and
    // || or

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 17;
    if (edad < 18){
        printf("Es menor de edad");
    }else if (edad == 18){
        printf("Tiene 18 a�os, es mayor de edad");
    }else{
        printf("Es mayor de edad");
    }

    //Tambi�n se pueden tener expresiones condicionales, el modelo seria expr1 ? expr2: expr3
    (edad < 18) ? printf("\nEs menor de edad"): printf("\nEs mayor de edad");


}
