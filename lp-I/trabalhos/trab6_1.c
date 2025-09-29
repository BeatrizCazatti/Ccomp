#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float **alocar_matriz(int linhas, int colunas);
void liberar_matriz(float **matriz, int linhas);
void parser(FILE *fp, int *largura, int *altura);
void ler_pixel(FILE *fp, float **matriz, int largura, int altura);
float **normalizar(float **valores, int largura, int altura);
void imprimir_matriz(float **matriz, int largura, int altura);


int main() {
    FILE *fp;
    char nomeArquivo[16];
    int largura, altura;

    scanf("%s", nomeArquivo);
    fp = fopen(nomeArquivo, "r");

    if (fp == NULL) {
        fprintf(stderr, "Erro: arquivo inexistente\n");
        return 1;
    }

    parser(fp, &largura, &altura);
    float **valores = alocar_matriz(altura, largura);

    ler_pixel(fp, valores, largura, altura);
    fclose(fp);

    float **normalizada = normalizar(valores, largura, altura);

    imprimir_matriz(normalizada, largura, altura);

    liberar_matriz(valores, altura);
    liberar_matriz(normalizada, altura);

    return 0;
}


float **alocar_matriz(int linhas, int colunas) {
	float **matriz = malloc(linhas * sizeof(float *));
    for (int i = 0; i < linhas; i++) {
		matriz[i] = malloc(colunas * sizeof(float));
    }
    return matriz;
}

void liberar_matriz(float **matriz, int linhas) {
	for (int i = 0; i < linhas; i++) {
		free(matriz[i]);
    }
    free(matriz);
}

void parser(FILE *fp, int *largura, int *altura) {
	char linha[100];
    
    fgets(linha, sizeof(linha), fp); //P2
	
    while (1) {
		fgets(linha, sizeof(linha), fp);
        if (linha[0] != '#') break;
    }
	
    sscanf(linha, "%d %d", largura, altura);
	
    fscanf(fp, "%s", linha); //consumir valor maximo
}

void ler_pixel(FILE *fp, float **matriz, int largura, int altura) {
	for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			fscanf(fp, "%f", &matriz[i][j]);
        }
    }
}

float **normalizar(float **valores, int largura, int altura) {
	float soma = 0, media, variancia = 0, desvio_padrao;
    float **normalizada = alocar_matriz(altura, largura);
	
	//soma
    for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			soma += valores[i][j];
        }
    }
	
    media = soma / (largura * altura);
	
    //variancia
    for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			variancia += pow(valores[i][j] - media, 2);
        }
    }
	
    variancia /= (largura * altura - 1);
    desvio_padrao = sqrt(variancia);
	
    //normalizar
    for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			normalizada[i][j] = (valores[i][j] - media) / desvio_padrao;
        }
    }
	
    return normalizada;
}

void imprimir_matriz(float **matriz, int largura, int altura) {
	for (int i = 0; i < altura; i++) {
		for (int j = 0; j < largura; j++) {
			if (j < largura - 1)
			printf("%.4f ", matriz[i][j]);
			else
				printf("%.4f", matriz[i][j]);
		}
		printf("\n");
	}
}
