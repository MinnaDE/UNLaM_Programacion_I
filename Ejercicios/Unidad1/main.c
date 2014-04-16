#include <stdio.h>
#include <stdlib.h>
#include "numeros.h"
#include "fecha.h"

int main()
{
    unsigned number;
    unsigned number2;

    int x;
    float tol = 0.001;
    float realNumber;

//    puts("Ingrese un natural: ");
//    fflush(stdin);
//    scanf("%u", &number);

    number = 3;
    printf("1) El factorial de %u es: %.0lf\n", number, factorial(number));

    number = 3;
    number2 = 5;
    printf("2) El nro. combinatorio entre %u y %u es: %.0lf\n", number2, number, combinatoria(number2, number));

    x = 1;
    printf("3) e^x siendo x: %d y la toleracia: %.4f es igual a : %.4lf\n", x, tol, exponencial(x, tol));

    x = 9;
    printf("4) x^(1/2) siendo x: %d y la toleracia: %.4f es igual a : %.4lf\n", x, tol, raizCuadrada(x, tol));

    number = 6;
    printf("5) El nro. %u %s a la serie de Fibonacci.\n", number, belongsToFibonacciSerie(number) ? "PERTENCE" : "NO PERTENECE");

    realNumber = 1.5;
    float pi = 3.1416;
    printf("6) El seno de %.2f pi siendo la tolerancia %.4f es %.4lf\n", realNumber, tol, seno(realNumber*pi, tol));

//    int i = 0,
//        divisores[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//        limit = sizeof(divisores)/sizeof(divisores[0]);
//    number = 8;
//    getDivisors(number, divisores);
//    printf("7) Los divisores de %u son : ", number);
//
//    while (i < limit && divisores[i])
//        printf("%d, ", divisores[i++]);
//
//    printf("\n");

    number = 6;
    printf("7) El natural %u es %s\n", number, clasifyNaturalNumber(number));

    t_fecha fecha = {13, 04, 2014};
    printf("La fecha %d/%d/%d es %s\n", fecha.d, fecha.m, fecha.a, (valida_fecha(&fecha)) ? "valida" : "invalida");

    number = 13;
    number2 = 5;
    int cociente;
    int resto;
    obtener_cociente_y_resto(number, number2, &cociente, &resto);
    printf("9) El cociente entre %u y %u es %d el resto es %d", number, number2, cociente, resto);

    return 0;
}
