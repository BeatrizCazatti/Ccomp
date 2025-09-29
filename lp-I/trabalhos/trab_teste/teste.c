#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int width;
    int height;
    int maxval;
    int *pixels;
} PGMImage;

// Função para pular comentários e ler próximo inteiro
int read_next_int(FILE *fp) {
    int c, val;
    // Pular espaços e comentários
    while ((c = fgetc(fp)) != EOF) {
        if (c == '#') {
            // Pular comentário até o fim da linha
            while ((c = fgetc(fp)) != EOF && c != '\n');
        } else if (c >= '0' && c <= '9') {
            ungetc(c, fp);
            fscanf(fp, "%d", &val);
            return val;
        }
    }
    return -1; // Erro
}

// Função para ler cabeçalho
void read_pgm_header(FILE *fp, int *width, int *height, int *maxval) {
    char magic[3];
    fscanf(fp, "%2s", magic);
    if (strcmp(magic, "P2") != 0) {
        fprintf(stderr, "Erro: formato inválido\n");
        exit(1);
    }
    *width = read_next_int(fp);
    *height = read_next_int(fp);
    *maxval = read_next_int(fp);
}

// Função para carregar pixels
int* read_pgm_pixels(FILE *fp, int width, int height) {
    int total = width * height;
    int *pixels = malloc(total * sizeof(int));
    if (!pixels) {
        fprintf(stderr, "Erro: memória insuficiente\n");
        exit(1);
    }
    for (int i = 0; i < total; ++i) {
        pixels[i] = read_next_int(fp);
    }
    return pixels;
}

// Função principal de leitura da imagem
PGMImage* load_pgm(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        fprintf(stderr, "Erro: arquivo inexistente\n");
        exit(1);
    }
    PGMImage *img = malloc(sizeof(PGMImage));
    if (!img) {
        fprintf(stderr, "Erro: memória insuficiente\n");
        exit(1);
    }
    read_pgm_header(fp, &img->width, &img->height, &img->maxval);
    img->pixels = read_pgm_pixels(fp, img->width, img->height);
    fclose(fp);
    return img;
}

// Função para imprimir pixels em hexadecimal
void print_pgm_hex(const PGMImage *img) {
    for (int i = 0; i < img->height; ++i) {
        for (int j = 0; j < img->width; ++j) {
            printf("%3X", img->pixels[i * img->width + j]);
            if (j != img->width - 1)
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    char filename[256];
    if (scanf("%255s", filename) != 1) {
        fprintf(stderr, "Erro: nome do arquivo não fornecido\n");
        return 1;
    }
    PGMImage *img = load_pgm(filename);
    print_pgm_hex(img);
    free(img->pixels);
    free(img);
    return 0;
}
