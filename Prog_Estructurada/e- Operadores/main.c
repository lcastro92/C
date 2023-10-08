#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Operadores aritméticos
    // suma: +
    //resta: -
    //division: /
    // multiplicacion: *
    //resto: %
    int a = 4, b = 6;
    printf ("La suma de %d + %d es %d\n", a,b, (a+b));
    printf ("La resta de %d + %d es %d\n", a,b, (a-b));
    printf ("La multiplicaci\xA2n de %d + %d es %d\n", a,b, (a*b));
    printf ("La divisi\xA2n de %d + %d es %d\n", a,b, (a/b));
    printf ("La el resto de la divisi\xA2n de %d / %d es %d\n", a,b, (a%b));


    //Operadores de composición
    //  var += valor :suma valor a var y lo guardar en var
    //  var -= valor :resta valor a var y lo guardar en var
    //  var *= valor :multiplica valor a var y lo guardar en var
    //  var /= valor :divide valor a var y lo guardar en var
    //  var %= valor :divide valor a var y guarda el resto en var

    int cont = 0;
    printf("Contador sin contar :%d\n",cont);
    cont += 2;
    printf("Contador nuevo agregado en 2: %d\n",cont);

    //Operadores de incremento y decremento
    //valor = 0
    //valor ++ (le suma 1 a valor y lo almacena en valor)
    //valor-- (le suma 1 a valor y lo almacena en valor)
    //al agregar los operadores al principio como en --valor, lo que se hace es que se decremente/incremente la variable y luego se ejecute la sentencia

    int valor = 0;
    printf("Valor original: %d\n", valor);
    valor++;
    printf("Nuevo valor de valor: %d\n\n", valor);

    //probamos usarlo directamente en printf
    printf("Nuevo valor de valor: %d\n",valor++); //Imprime la variable y luego la incrementa
    printf("Nuevo valor de valor: %d\n", valor);

    //al agregarle ++valor
    printf("Nuevo valor de valor: %d", ++valor);


}
