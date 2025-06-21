#include <stdio.h>
#include <stdlib.h>

//retorna um ponteiro que aponta para o inicio de um array de floats
float* le_arquivo (char* nomeArq) {
    float* vetor;
    int tam;

    FILE* arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArq);
        return NULL; // Retorna NULL em caso de erro
    }
    
    fscanf(arq, "%d", &tam);
    printf("tamanho: %d",tam);
    
    vetor = (*float) malloc(tam * sizeof(float));
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        fclose(arq); // Fechar o arquivo antes de retornar
        return NULL;
    }
    
    return vetor; // retorna o ponteiro para o início do vetor
}