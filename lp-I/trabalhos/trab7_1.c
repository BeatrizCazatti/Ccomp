/*Faça um programa que leia um texto palavra por palavra, enquanto vai armazenando cada nova palavra em uma lista encadeada mantida sempre em ordem alfabética. Esta lista não deve conter palavras repetidas, assim, a cada vez que for encontrada uma palavra que já esteja na lista encadeada, o contador de ocorrências relativo a esta palavra precisa ser incrementado.  Para tanto, a estrutura do nó precisa conter um campo para contabilizar o número de ocorrências da respectiva palavra. Além disto, o espaço destinado às palavras deve ser alocado dinamicamente e deve ser limitado à dimensão mínima necessária para o armazenamento de cada palavra especificamente.  

Para efeitos de padronização, nos textos fornecidos para teste, as palavras são separadas pelos caracteres entre aspas a seguir " ,.-,;:!\n\t". A entradas são fornecidas através do canal stdin e um array de 100000 caracteres e suficiente para armazenar toda a entrada. 

Seu programa deve gerar um relatório com uma linha por palavra. Cada linha, precisa conter a palavra seguida de dois caracteres tab e do número de ocorrências. 

Ao final da execução, toda a memória alocada dinamicamente para os elementos da lista encadeada e para as string precisa ser liberado. Como requisito adicional, não é permitida a utilização de algoritmos ITERATIVOS.*/

//função strtok quebra (tokeniza) uma string em pedaços (tokens), usando os delimitadores como "tesoura".
//char *strtok(char *str, const char *delimitadores);
//int strcmp(const char *str1, const char *str2): 0(são iguais), < 0 str1 vem antes de str2, > 0 str1 vem depois de str2
//strlen()
//char *strdup(const char *s)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXTO 100000
#define CARACTERES " ,.-;:!\n\t"

struct no {
    char *palavra;
    int ocorrencias;
    struct no *prox;
};

char *aloca_palavra(const char *s);
struct no *insere_ordenado(struct no *lista, const char *palavra);
void processa_palavras(char *token, struct no **lista);
void imprime(struct no *lista);
void libera(struct no *lista);

int main() {
    char texto[MAX_TEXTO];

    if (!fgets(texto, MAX_TEXTO, stdin)) {
        fprintf(stderr, "Erro ao ler entrada.\n");
        return 1;
    }

    struct no *lista = NULL;
    processa_palavras(strtok(texto, CARACTERES), &lista);
    imprime(lista);
    libera(lista);

    return 0;
}

char *aloca_palavra(const char *s) {
    char *nova = malloc(strlen(s) + 1);
    if (!nova) {
        perror("malloc");
        return NULL;
    }
    strcpy(nova, s);
    return nova;
}

struct no *insere_ordenado(struct no *lista, const char *palavra) {
    if (!lista) {
        struct no *novo = malloc(sizeof(struct no));
        novo->palavra = aloca_palavra(palavra);
        novo->ocorrencias = 1;
        novo->prox = NULL;
        return novo;
    }

    if (strcmp(palavra, lista->palavra) == 0) {
        lista->ocorrencias++;
        return lista;
    } else if (strcmp(palavra, lista->palavra) < 0) {
        struct no *novo = malloc(sizeof(struct no));
        novo->palavra = aloca_palavra(palavra);
        novo->ocorrencias = 1;
        novo->prox = lista;
        return novo;
    } else {
        lista->prox = insere_ordenado(lista->prox, palavra);
        return lista;
    }
}

void processa_palavras(char *token, struct no **lista) {
    if (!token) return;
    if (*token) {
        *lista = insere_ordenado(*lista, token);
    }
    processa_palavras(strtok(NULL, CARACTERES), lista);
}

void imprime(struct no *lista) {
    if (lista) {
        printf("%s\t\t%d\n", lista->palavra, lista->ocorrencias);
        imprime(lista->prox);
    }
}

void libera(struct no *lista) {
    if (lista) {
        libera(lista->prox);
        free(lista->palavra);
        free(lista);
    }
}
