#include <stdio.h>
#include <stdlib.h>

int main()
{
    //se crea un vector entero que se llama array y tiene 10 valores.
    int array[10], valor;
    printf("Ingrese 10 enteros: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    printf("array ingresado:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", array[i]);
    }

    //tambi�n podemos crear un vector as�:
    int array_dos[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Array 2:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", array_dos[i]);
    }

    //tambi�n podemos seleccionar algunas de las posiciones a tener datos, y los restantes por defecto quedan en 0
    int array_tres[15]={[14]=48, [9]=7, [2]=29};
    printf("Array 3:\n");
    for (int i = 0; i < 15; i++){
        printf("%d ", array_tres[i]);
    }

    //podemos recorrer un vector y dejarlo operativo

}
