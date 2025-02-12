#include <stdio.h>

void PasoValorReferencia(double *array, int valor) {
    array[5]=-8.5;
    valor=4;
}

int main(void) {
    double array[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    PasoValorReferencia(array, array[3]);
    printf("El valor de Array[5] es: %f y el valor de Array[3] es: %f\n", array[5], array[3]);
    return 0;
}