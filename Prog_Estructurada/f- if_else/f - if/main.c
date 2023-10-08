//operadores de comparación
    // < menor que
    // > mayor que
    // <= menor igual que
    // >= mayor igual que
    // == igual que
    // != diferente que

    //operadores lógicos
    // ! negación lógica
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
        printf("Tiene 18 años, es mayor de edad");
    }else{
        printf("Es mayor de edad");
    }

    //También se pueden tener expresiones condicionales, el modelo seria expr1 ? expr2: expr3
    (edad < 18) ? printf("\nEs menor de edad"): printf("\nEs mayor de edad");


}
