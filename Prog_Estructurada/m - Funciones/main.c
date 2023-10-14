//La estructura de la declaración de una función incluye al principio el tipo de dato que devuelve (sino un void)
    //el nombre de la función, y luego entre paréntesis los tipos de datos esperados
    //
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //para usar tipo booleano

//Debemos agregar el prototipo de la función para que el compilador las reconozca como tal
double promedio (double a, double b);
void mensaje();
bool es_primo(int numero);
void mostrar_vector(int cant,int a[]);
int fact(int n);

int main()
{
    int valores[] = {3,4,5,6,7,8,3,2,1,6};
    int num;
    mensaje();
    scanf("%d",&num);
    if(es_primo(num)){
        printf("%d es primo", num);
    }else{
        printf("%d no es primo", num);
    }


    printf("\nLos valores del vector son: ");
    mostrar_vector(10,valores);


    printf("El factorial de 5 es: %d", fact(5));

    return 0;
}


double promedio (double a, double b){
    return (a+b)/2;
}

//no devuelve nada
void mensaje(){
    printf("Ingrese el numero a analizar para ver si es primo\n");
}


bool es_primo(int numero){
    bool primo = true;
    for (int i = 2 ; i < numero;i ++){
        if (numero%i == 0){
            primo=false;
        }
    }
    return primo;
}

//en el caso de que querramos recorrer un aray dentro de una funcion, la función no sabe  la longitud del array, por lo que sizeof no sirve, hay que pasar como parámetro la longitud.

void mostrar_vector( int cant,int a[]){
    for (int i = 0; i < cant; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

}


//las funciones recursivas no son tan usadas en C
int fact(int n){
    if (n<=1)
        return 1;
    else
        return n * fact(n-1);
}


