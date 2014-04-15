#include "arreglos.h"

int sumOfArrayElements(int * collection, int limit)
{
    int i, result = 0;

    for (i = 0; i < limit; i++) {
        result = *(collection + i * sizeof(int));
    }

    return result;
}
