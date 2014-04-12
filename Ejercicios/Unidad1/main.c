#include <stdio.h>
#include <stdlib.h>
#include "numeros.h"

int main()
{
    unsigned number = 3;
    unsigned number2 = 5;

    int x = 1;
    float tol = 0.001;

//    puts("Ingrese un natural: ");
//    fflush(stdin);
//    scanf("%u", &number);

    printf("1) El factorial de %u es: %.0lf\n", number, factorial(number));

    printf("2) El nro. combinatorio entre %u y %u es: %.0lf\n", number2, number, combinatoria(number2, number));

    printf("3) e^x siendo x: %d y la toleracia: %.4f es igual a : %.4lf\n", x, tol, exponencial(x, tol));

    x=9;
    printf("4) x^(1/2) siendo x: %d y la toleracia: %.4f es igual a : %.4lf\n", x, tol, raizCuadrada(x, tol));

    return 0;
}
