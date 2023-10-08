#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota = 5;
    switch(nota){
        case 1:
        case 2:
        case 3: printf("Insuficiente");
                break;
        case 4:
        case 5: printf("Regular");
                break;
        case 6:
        case 7: printf("Bien");
                break;
        case 8:
        case 9: printf("Muy bien");
                break;
        case 10: printf("Excelente!");
                break;
        default: printf("Nota inválida");
                break;

    }
}
