#include <stdio.h>
#include <stdlib.h>

void ordenar (int *x, int *y) {
    int aux;

    if(*x > *y){
        aux = *x;
        *x = *y;
        *y = aux;
    }
}

int calculaMDC (int x, int y) {
    //Algoritmo de Euclides
    int resto = 0;

    while(y != 0){
        resto = x % y;
        x = y;
        y = resto;
    }
    return x;   
}

int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    ordenar(&x, &y);

    printf("%d", calculaMDC(x, y));

    return 0;
}