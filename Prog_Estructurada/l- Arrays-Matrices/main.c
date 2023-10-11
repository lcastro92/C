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

    //también podemos crear un vector así:
    int array_dos[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Array 2:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", array_dos[i]);
    }

    //también podemos seleccionar algunas de las posiciones a tener datos, y los restantes por defecto quedan en 0
    int array_tres[15]={[14]=48, [9]=7, [2]=29};
    printf("Array 3:\n");
    for (int i = 0; i < 15; i++){
        printf("%d ", array_tres[i]);
    }

    //podemos recorrer un vector y dejarlo operativo sin necesidad de cambiar el "hasta" del for de la siguiente manera:
    printf("\nArray 3 con metodo general de recorrida:\n");
    for (int i = 0; i < (int) (sizeof(array_tres)/sizeof(array_tres[0])); i++){
        printf("%d ", array_tres[i]);
    }printf("\n");


    //podemos crear una matriz directamente pasando los valores
    int matriz[3][9]={{1,1,1,1,1,0,1,1,1},
                    {0,1,0,1,0,1,0,1,0},
                    {1,1,1,1,1,0,1,1,1}
                    };
    int matriz2[3][9]= {1,1,1,1,1,0,1,1,1,
                    0,1,0,1,0,1,0,1,0,
                    1,1,1,1,1,0,1,1,1
                    };

    //for para recorrerlas con formato de filas y columnas
    for (int filas = 0; filas <3; filas++){
        for (int columnas= 0; columnas <9; columnas++){
            printf("%d ", matriz2[filas][columnas]);
        }
        printf("\n");
    }
//SE PUEDEN DECLARAR ARRAYS CON CONST, ejemplo CONST char hex_chars[] ya que de esta manera no se podrá modificar el array por el programa más adelante, e informarà errores si se intenta hacerlo

}
