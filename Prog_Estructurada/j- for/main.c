#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 10; i> 0; i--){
        printf("i vale: %d\n", i);
    }

    //tambien se pueden inicializar varias variables en la declaración del for
    for (int sum = 0,  i = 1; i < 10; i++){
        printf("Vuelta: %d\t suma: %d\n",i, sum += i);
    }
}
