//En C, se trabajan los Strings como vectores de chars. Finalizando con un \0 para indicar fin del string.


#include <stdio.h>
#include <stdlib.h>
int read_line(char str[], int n);
void leer_string(char str[], int n);
int main()
{
    char *palabra;
    char str[100];
    palabra ="Hola Mundo" ;//guarda la dirección de la primera posición del vector de chars. (Luego no se puede modificar)
    //Si necesitamos cambiar el valor luego conviene declararlo directamente como vector
    char palabra2 [5] = "Lucas";
    printf("%s\n", palabra);
    printf("Ingresa tu nombre: ");
    char nombre[30];
    gets(nombre);
    printf("Hola %s\n",nombre);
    puts(nombre); //otra manera de imprimir strings
    int cant = read_line(str, 100);
    leer_string(str, 100);


}

int read_line(char str[], int n){
    int ch , i =0;
    while ((ch=getchar())!='\n'){ //getchar devuelve valores enteros
        if (i < n)
           printf("%c", ch);
           str[i++] = ch;
    str[i] = '\0';
    return i;

    }
}

void leer_string(char str[], int n){
    for (int i =0 ; i < n; i++){
        if (str[i]!='\0'){
            printf("%c", str[i]);
        }
    }
}


