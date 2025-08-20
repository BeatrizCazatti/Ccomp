#ifndef PGM_UTILS_H
#define PGM_UTILS_H

typedef struct {
    int largura;
    int altura;
    int max_valor;
    int* pixels;
} ImagemPGM;

ImagemPGM carregar_imagem(const char* nomeArquivo);

#endif
