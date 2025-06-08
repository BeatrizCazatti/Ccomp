#include <stdio.h>
#include <stdlib.h>
#include "carregar_pixels.h"

void ler_cabecalho(char* nomeArquivo){
    char linha[150];
    int numColuna, numLinha, quantPixels, maxValor;

    FILE *fp = fopen(nomeArquivo, "r");

    if(fp == NULL){
        perror("Erro: arquivo inexistente\n");
        exit(1);
    }
    
    fgets(linha, sizeof(linha), fp); //P2
    fgets(linha, sizeof(linha), fp); //comentario
    fgets(linha, sizeof(linha), fp); //dimensoes
    sscanf(linha, "%d %d", &numColuna, &numLinha);
    fgets(linha, sizeof(linha), fp); //valor max
    sscanf(linha, "%d", &maxValor);
        
    quantPixels = numColuna * numLinha;
    int *pixels = carregar_pgm(fp, quantPixels);
    imprimir_pixels(pixels, numColuna, numLinha);
    fclose(fp);
}

int *carregar_pgm (FILE *fp, int quantPixels){
    int* pixels = malloc(sizeof(int) * quantPixels);
    for(int i = 0; i < quantPixels; i++){
        fscanf(fp, "%d", &pixels[i]);
    }
    return pixels;    
}

void imprimir_pixels(const int* pixels, int numColuna, int numLinha) {
    for (int i = 0; i < numLinha; i++) {
        for (int j = 0; j < numColuna; j++) {
            if (j > 0) printf(" ");
            printf("%3X", pixels[i * numColuna + j]);
        }
        printf("\n");
    }
}
