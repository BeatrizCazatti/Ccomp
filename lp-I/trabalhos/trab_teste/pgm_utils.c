#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pgm_utils.h"

static void ler_cabecalho(FILE* fp, int* largura, int* altura, int* max_valor) {
    char linha[100];
    
    // Ignora P2 e comentários
    do {
        fgets(linha, sizeof(linha), fp);
    } while (linha[0] == '#');

    // Dimensões
    sscanf(linha, "%d %d", largura, altura);

    // Valor máximo
    do {
        fgets(linha, sizeof(linha), fp);
    } while (linha[0] == '#');
    
    sscanf(linha, "%d", max_valor);
}

static int* ler_pixels(FILE* fp, int quantidade) {
    int* pixels = malloc(sizeof(int) * quantidade);
    if (!pixels) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(1);
    }

    int i = 0;
    while (i < quantidade && !feof(fp)) {
        int val;
        if (fscanf(fp, "%d", &val) == 1) {
            pixels[i++] = val;
        } else {
            // Pula valores inválidos
            fscanf(fp, "%*s");
        }
    }

    // Preenche com 0 caso faltem pixels
    while (i < quantidade) {
        pixels[i++] = 0;
    }

    return pixels;
}

ImagemPGM carregar_imagem(const char* nomeArquivo) {
    FILE* fp = fopen(nomeArquivo, "r");
    if (!fp) {
        fprintf(stderr, "Erro: arquivo inexistente\n");
        exit(1);
    }

    ImagemPGM img;
    ler_cabecalho(fp, &img.largura, &img.altura, &img.max_valor);

    int total_pixels = img.largura * img.altura;
    img.pixels = ler_pixels(fp, total_pixels);

    fclose(fp);
    return img;
}
