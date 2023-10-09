#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //librería con funciones para manejo de char

int main()
{
    char letra, mayuscula, letra_dos;
    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    mayuscula = toupper(letra); //transforma la letra en mayuscula
    printf("letra original: %c y letra mayuscula %c\n", letra, mayuscula);

    //Otra manera de insertar y mostrar chars es usando getchar() y putchar()//son mas rápidos al momento de ejecutar que scanf()
    while(( getchar())!= '\n'); //limpio el buffer del teclado
    printf("Ingrese otra: ");
    letra_dos = getchar();
    printf("La letra ingresada es: ");
    putchar(letra_dos);

}
