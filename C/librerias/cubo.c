#include "./cubo.h"

T_cubo_rubik *crearCubo() {
    T_cubo_rubik *cubo;
    cubo->memoria=(T_cubo_rubik *)malloc(sizeof(T_cubo_rubik));
    for(int y=0;y<6;y++) {
        for(int x=0;x<6;x++) {
            cubo->casilla[y][x]=0;
        }
    }
    return cubo;
}

void eliminarCubo(T_cubo_rubik *cubo) {
    if(cubo->memoria!=((void*)0)) {
        free(cubo->memoria);
    } else {
        printf("cubo no definido\n");
    }
}