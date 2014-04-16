#ifndef NUMEROS_H_INCLUDED
#define NUMEROS_H_INCLUDED
#include <math.h>

double factorial(unsigned);
double combinatoria(unsigned, unsigned);
double exponencial(int, float);
double raizCuadrada(unsigned, float);
int belongsToFibonacciSerie(unsigned);
double seno(float, float);
void getDivisors(unsigned, int *);
char * clasifyNaturalNumber(unsigned);
void obtener_cociente_y_resto(unsigned, unsigned, int *, int *);

#endif // NUMEROS_H_INCLUDED
