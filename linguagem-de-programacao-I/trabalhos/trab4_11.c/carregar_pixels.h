#ifndef CARREGAR_PIXELS_H
#define CARREGAR_PIXELS_H

int ler_cabecalho(char* nomeArquivo);
int *carregar_pgm(FILE *fp, int quantPixels);
void imprimir_pixels(const int* pixels, int numColuna, int numLinha);

#endif