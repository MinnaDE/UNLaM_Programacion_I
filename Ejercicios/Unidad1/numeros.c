#include "numeros.h"
#include "arreglos.h"

double factorial(unsigned number)
{
    int i;
    double result = 1;

    for (i = 2; i <= number; i++) {
        result *= i;
    }

    return result;
}

double combinatoria(unsigned m, unsigned n)
{
    return factorial(m) / (factorial(n) * factorial(m - n));
}

double exponencial(int x, float tol)
{
    double result = 0, term;
    unsigned i = 0;

    do {
        term = pow(x, i) / factorial(i);
        result += term;
        i++;
    } while (term >= tol);

    return result;
}

double raizCuadrada(unsigned x, float tol)
{
    double term1, term2 = 1;

    do {
        term1 = term2;
        term2 = 0.5 * (term1 + (x/term1));

    } while (fabs(term2 - term1) >= tol);

    return term2;
}

int belongsToFibonacciSerie(unsigned number)
{
    int term1 = 1, term2 = 1, lastTerm;

    do {
        lastTerm = term1 + term2;
        term2 = term1;
        term1 = lastTerm;
    } while (lastTerm < number);

    return lastTerm == number;
}

double seno(float x, float tol)
{
    double term, result = 0;
    int i = 1;

    do {
        term = pow(-1, i-1) * pow(x, 2*i - 1) / factorial(2*i - 1);
        result += term;
        i++;
    } while (fabs(term) >= tol);

    return result;
}

void getDivisors(unsigned number, int * divisors)
{
    int pos = 1, i;

    divisors[0] = 1;

    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            divisors[pos++] = i;
        }
    }
}

char * clasifyNaturalNumber(unsigned number)
{
    int sum = 0, divisors[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, limit = sizeof(divisors) / sizeof(divisors[0]);

    getDivisors(number, divisors);

    sum = sumOfArrayElements(divisors, limit);

    if (sum > number)
        return "abundante";
    else if (sum < number)
        return "deficiente";
    else
        return "perfecto";
}

void obtener_cociente_y_resto(unsigned a, unsigned b, int * cociente, int * resto)
{
    *cociente = a / b;
    *resto = a % b;
}

unsigned sumOfNNaturalNumbers(unsigned number)
{
    unsigned result = 0;
    int i;

    for (i = 0; i < number; i++)
        result += number - i;

    return result;
}

unsigned sumOfNPairsNaturalNumbers(unsigned number)
{
    unsigned result = 0;
    int i = 2, counter = 0;

    while (counter < number) {
        if (i % 2 == 0) {
            result += i;
            counter++;
        }

        i++;
    }

    return result;
}

unsigned sumOfAllPairsNaturalNumbersPreviousTo(unsigned number)
{
    unsigned result = 0;
    int i;

    for (i = 1; i < number; i++)
        if ((number - i) % 2 == 0)
            result += number - i;

    return result;
}

int isPrime(unsigned number)
{
    int i;

    for (i = 2; i < number - 1; i++)
        if (number % i == 0)
            return FALSO;

    return VERDADERO;
}
