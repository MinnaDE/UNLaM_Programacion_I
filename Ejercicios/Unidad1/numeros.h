#ifndef NUMEROS_H_INCLUDED
#define NUMEROS_H_INCLUDED

#include <math.h>

#define FALSO 0
#define VERDADERO 1


double factorial(unsigned);
double combinatoria(unsigned, unsigned);
double exponencial(int, float);
double raizCuadrada(unsigned, float);
int belongsToFibonacciSerie(unsigned);
double seno(float, float);
void getDivisors(unsigned, int *);
char * clasifyNaturalNumber(unsigned);
void obtener_cociente_y_resto(unsigned, unsigned, int *, int *);
unsigned sumOfNNaturalNumbers(unsigned);
unsigned sumOfNPairsNaturalNumbers(unsigned);
unsigned sumOfAllPairsNaturalNumbersPreviousTo(unsigned);
int isPrime(unsigned);

#endif // NUMEROS_H_INCLUDED
