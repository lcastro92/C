#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant_items=583, mes=4,dia=24,anio=1992;
    float precio=13.5;
    printf("Ingrese cantidad de items: ");
    //scanf("%d", &cant_items);
    printf("\nIngrese precio unitario: ");
    //scanf("%f", &precio);
    printf("Ingrese fecha de compra (mm/dd/yyyy): \n");
    //scanf("%d/%d/%d", &mes, &dia, &anio);
    printf("Item\t\tPrecio\t\tFecha\n");
    printf("\t\tUnitario\tCompra\n");
    printf("%d\t\t$%-4.2f", cant_items, precio);


}
