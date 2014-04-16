#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#define es_bisiesto(x) ((x) % 4 == 0 && (x) % 100 != 0 || (x) % 400 == 0 ? 1 : 0)
#define FECHA_VALIDA 1
#define FECHA_INVALIDA 0

typedef struct
{
    int d, m, a;
} t_fecha;

int valida_fecha(const t_fecha *);
int cant_dias_mes(int, int);

#endif // FECHA_H_INCLUDED
