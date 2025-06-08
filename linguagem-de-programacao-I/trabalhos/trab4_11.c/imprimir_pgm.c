#include <stdio.h>
#include "imprimir_pgm.h"

void imprimir_pixels(const int* pixels, int numColuna, int numLinha) {
    for (int i = 0; i < numLinha; i++) {
        for (int j = 0; j < numColuna; j++) {
            if (j > 0) printf(" ");
            printf("%3X", pixels[i * numColuna + j]);
        }
        printf("\n");
    }
}