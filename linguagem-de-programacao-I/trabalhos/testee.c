#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAVE 20

struct no {
    int key;
    int occurrences;
    struct no *prox;
};

// Insere ou incrementa número na lista (iterativa)
void inserir(struct no **histograma, int chave) {
    struct no *anterior = NULL;
    struct no *atual = *histograma;

    // Busca a posição correta
    while (atual != NULL && atual->key < chave) {
        anterior = atual;
        atual = atual->prox;
    }

    // Se já existe a chave, só incrementa
    if (atual != NULL && atual->key == chave) {
        atual->occurrences++;
        return;
    }

    // Senão, cria novo nó
    struct no *novo = malloc(sizeof(struct no));
    if (!novo) {
        perror("malloc");
        exit(1);
    }
    novo->key = chave;
    novo->occurrences = 1;
    novo->prox = atual;

    // Inserção no início
    if (anterior == NULL) {
        *histograma = novo;
    } else {
        anterior->prox = novo;
    }
}

// Busca número de ocorrências na lista
int buscar_ocorrencias(struct no *histograma, int chave) {
    struct no *p = histograma;
    while (p != NULL) {
        if (p->key == chave)
            return p->occurrences;
        if (p->key > chave)
            break;
        p = p->prox;
    }
    return 0;  // não encontrado
}

// Libera a lista
void liberar(struct no *histograma) {
    while (histograma != NULL) {
        struct no *tmp = histograma;
        histograma = histograma->prox;
        free(tmp);
    }
}

int main() {
    char nomeArq[16];
    scanf("%s", nomeArq);

    FILE *fp = fopen(nomeArq, "r");
    if (!fp) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    struct no *histograma = NULL;
    int num;

    // Lê números do arquivo
    while (fscanf(fp, "%d", &num) == 1) {
        if (num >= 0 && num <= MAX_CHAVE)
            inserir(&histograma, num);
    }

    fclose(fp);

    // Imprime histograma de 0 a 255
    for (int i = 0; i <= MAX_CHAVE; i++) {
        int ocorrencias = buscar_ocorrencias(histograma, i);
        printf("%d\t%d\n", i, ocorrencias);
    }

    liberar(histograma);
    return 0;
}
