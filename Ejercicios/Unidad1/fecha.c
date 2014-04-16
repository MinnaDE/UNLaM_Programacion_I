#include "fecha.h"

int valida_fecha(const t_fecha * f)
{
    if (f->a >= 1600)
        if (f->m >= 1 && f->m <= 12)
            if (f->d >= 1 && f->d <= cant_dias_mes(f->m, f->a))
                return FECHA_VALIDA;

    return FECHA_INVALIDA;
}

int cant_dias_mes(int m, int a)
{
    int dm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m == 2 && es_bisiesto(a))
        return 29;

    return dm[m - 1];
}
