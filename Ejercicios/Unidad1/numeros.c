#include "numeros.h"

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

/**
* Revisar porque tiene tan baja precición, el ejercicio no redacta correctamente el algoritmo a utilizar.
*/
double raizCuadrada(unsigned x, float tol)
{
    double term1, term2 = 1;

    do {
        term1 = term2;
        term2 = 0.5 * (term1 + (x/term1));

    } while (term2 - term1 >= tol);

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
    double term, result = 0, signo, exp, aux3;
    int i = 1;

    do {
        signo = pow(-1, i-1);
        exp = pow(x, 2*i - 1);

        term = pow(-1, i-1) * pow(x, 2*i - 1) / factorial(2*i - 1);
        result += term;
        i++;
    } while (fabs(term) >= tol);

    return result;
}
