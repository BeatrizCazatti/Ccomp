#include <stdio.h>
#include <stdlib.h>
#include "pgm_utils.h"

int main() {
    char nomeArquivo[100];
    scanf("%s", nomeArquivo);

    ImagemPGM img = carregar_imagem(nomeArquivo);

    // Impressão em hexadecimal
    for (int i = 0; i < img.altura; i++) {
        for (int j = 0; j < img.largura; j++) {
            int idx = i * img.largura + j;
            if (j > 0) printf(" ");
            printf("%3X", img.pixels[idx]);
        }
        printf("\n");
    }

    free(img.pixels);
    return 0;
}
