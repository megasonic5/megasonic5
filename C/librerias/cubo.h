#ifndef _CUBO_H
#define _CUBO_H 0

#include "cubo.c"

#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif

typedef struct {
    int *casilla[6][6];
    int *memoria;
} T_cubo_rubik;

T_cubo_rubik *crearCubo();
void eliminarCubo(T_cubo_rubik *cubo);

#endif