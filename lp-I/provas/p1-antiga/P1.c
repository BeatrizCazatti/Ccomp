#include <stdio.h>
#include <string.h>

FILE* abertura(void);
int parser(int *plinhas, int *pcolunas, int *pmaximo, FILE *parq);
int le_imprime_pixels(int linhas, int colunas, int maximo, FILE *parq);

int main () {
	int linhas, colunas, maximo;
	
	
	FILE *arq = abertura();
	if(!arq){
		perror("ERRO");
		return 1;
	}
	
	if(parser(&linhas, &colunas, &maximo, arq)){
		perror("PARSER ERRO");
		return 2;
	}
	
	if(le_imprime_pixels(linhas, colunas, maximo, arq)){
		perror("PIXEL DATA ERRO");
		return 3;
	}
	
	if(fclose(arq)){
		perror("CLOSING ERRO");
		return 4;
	}
	return 0;
}

FILE* abertura(void) {
	char nomeArq[16];
	printf("Informe o nome do arquivo P2: ");
    scanf("%s", nomeArq);
    return fopen(nomeArq, "r");
}

int parser(int* linhas, int* colunas, int* maximo, FILE* arq){
    char linha[100];

    if (!fgets(linha, sizeof(linha), arq)) return 2;

    linha[strcspn(linha, "\n")] = '\0';

    if (strcmp(linha, "P2") != 0) return 2;

    if (!fgets(linha, sizeof(linha), arq)) return 2;

    if (linha[0] == '#') {
        if (!fgets(linha, sizeof(linha), arq)) return 2;
    }
    
    if (sscanf(linha, "%d %d", colunas, linhas) != 2) return 2;

    if (fscanf(arq, "%d", maximo) != 1) return 2;

    return 0;
}

int le_imprime_pixels(int linhas, int colunas, int maximo, FILE* arq){
	int pixel;
	float resultado;
	
	for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
			fscanf(arq, "%d", &pixel);
			resultado = (float)pixel/(float)maximo;
			if(resultado == (int)resultado)
				printf("(%d,%d)=%.0f ", i, j, resultado);
			else
				printf("(%d,%d)=%.2f ", i, j, resultado);

        }
    }
	return 0;
}
