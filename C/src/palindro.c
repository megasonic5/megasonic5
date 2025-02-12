#include <stdio.h>
#include <string.h>

int Palindro(char *cadena) {
    register int i,j;
    while(i<j && cadena[i]==cadena[j]) {
        i++;
        j--;
    }
    return (i<=j);
}

int main() {
    char cadena[100];
    printf("Introduce la palabra.\n");
    gets(cadena);
    printf("\nLa palabra %s %s palindroma.\n", cadena, (Palindro(cadena)) ? "es" : "no es");
    return 0;
}