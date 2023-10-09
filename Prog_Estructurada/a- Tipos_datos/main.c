//***************************ENTEROS************************************************************************************
    //Valores int en procesadores de 64bits:
    //short int -32768 a 32767
    //unsigned short int 0 a 65535
    //int -217483648 a 2147483647
    //unsigned int 0 a 4294967295
    //long int -9223372036854775808 a 9223372036854775807
    //unsigned long int 0 a 18446744073709551615

    //*********************************************************************************************************************
    //los numeros en base 8 (octales) deben comenzar con el numero 0 y los digitos ser del 0 al 7 (017, 0377, 077777)
    //los hexadecimales tienen digitos del 0 al 9 y letras hasta la f (minuscula o mayuscula es lo mismo) (0xff, 45xFF)
    //Para indicar a una constante que use long int, debe terminar en L 15L, 0377L
    //para indicar a una constante que use unsigned int debe terminar en U: 15U 0377U

    //*****************************************************************************************************************
    //leer unsigned
    //scanf("%u", &var) unsigned decimal
    //scanf("%o",&var) unsigned octal
    //scanf("%x", &var) unsigned hexadecimal
    //leer/escribir short int se agrega h al principio scanf("%hd", &var)
    //leer /escribir long int se usa l antes de d, o , u, x scanf("%ld", &var)
    //leer /escribir long long int se usa doble ll al principio scanf("%lld", &var)


//**************************************************DECIMALES****************************************************************
        //valores float
        //float 1.17549 x 10**-38 a 3.40282 x 10**38 precisión 6 digitos
        //double 2.22507 x 10 **-308 a 1.79769 x 10**308 precisión 15 digitos
        //para indicar que una constante debe guardar un float se pone al final una f, 57.2F
        //para indicar que una constante debe guardar un long double se pone una L al final 57.2L
        //para leer un long double hay que declarar la variable como double y luego scanf("%lf",&var)

//**********************************CARACTERES******************************************************************************
//C almacena los chars como enteros simples.
//por ejemplo char i = 'a' lo almacena como 97 (su código ascii)
//char i = 65 (corresponde a 'A')

//se puede castear usando int o float entre ()
//float  f= 54.6
//int i = (float) f


//************************************************TIPOS DE DATOS DEFINIDOS POR EL USUARIO**********************************
//usando typedef podemos definir tipos de datos propios, ejemplo:
//typedef float Pesos;
//Pesos ingresos = 1000.0f.


#include <stdio.h>
#include <stdlib.h>

int main()
{




}
