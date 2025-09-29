/*Implemente um programa em múltiplos arquivos que demonstre o resultado do algoritmo flood fill recursivo (instanciado chamadas recursivas para os vizinhos norte-sul-leste-oeste veja o pseudocódigo). Seu programa deve receber como entrada pelo teclado o nome do arquivo de entrada e fornecer na tela do terminal o resultado final do algoritmo. Caso o arquivo de entrada não exista, seu programa deve imprimir a mensagem "Erro arquivo inexistente\n"

O programa deve necessariamente estar subdividido em três arquivos:
- main.c - programa principal
- floodfill.h - protótipos das funções usadas no programa principal
- floodfill.c - implementações das funções criadas para este trabalho

Arquivo texto de entrada:

20 linhas, cada uma com 20 caracteres contendo os pixels da matriz Imagem.

na linha 21 o arquivo deve conter a coordenada x (xis) seguida da coordenada y (ipslon) a partir da qual o floodfil deve começar a ser aplicado.

Os elementos da matriz imagem são do tipo caracter. O caracter 'X' indica que o pixel está aceso, enquanto ' ' (caracter espaço) indica que o pixel está apagado.*/

#include <stdio.h>
#include "floodfill.h"

#define NUM_LINHAS 20
#define NUM_COLUNAS 20

int main () {
    char nomeArq[16];
    char linha[256];
    char matriz[NUM_LINHAS][NUM_COLUNAS];
    int x=0, y=0;

    scanf("%s", nomeArq);

    FILE* fp = fopen(nomeArq, "r");
    if(fp == NULL){
        perror("Erro arquivo inexistente\n");
        return 1;
    }

    printf("\n\n");
    for(int i = 0; i < NUM_LINHAS; i++){
        for(int j = 0; j < NUM_COLUNAS; j++){
            matriz[i][j] = getc(fp);
        }
        fgetc(fp); // \n
    }
    fscanf(fp, "%d %d", &x, &y);

    flood_fill_recursivo(matriz, x, y);

    for(int i = 0; i < NUM_LINHAS; i++){
        for(int j = 0; j < NUM_COLUNAS; j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    if(fclose(fp) != 0){
        perror("Erro: fechamento do arquivo sem sucesso");
        return 2;
    }
    return 0;
}