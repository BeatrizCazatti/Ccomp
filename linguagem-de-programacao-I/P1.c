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
	
	scanf("%s", nomeArq);
	return fopen(nomeArq, "r");
}

int parser(int* linhas, int* colunas, int* maximo, FILE* arq){
	char tipo[16];
	fgets(tipo, sizeof(linha), arq);
	strcmp(tipo, "P2");
	return 0;
}

int le_imprime_pixels(int linhas, int colunas, int maximo, FILE *parq){
	printf("le");
	return 0;
}
