#include <stdio.h>
#include <stdlib.h>
#include "vetinput.h"

//retorna um ponteiro do primeiro elemento de um array de floats
float* le_arquivo (char nomeArq[]) {
    int tam = 0;
    float* vetor = NULL;
    
    FILE* arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Erro: arquivo %s não foi encontrado.\n", nomeArq);
        return NULL; 
    }
    
    if(fscanf(arq, "%d", &tam) != 1){
        printf("Erro: arquivo %s está corrompido.\n", nomeArq);
        if(fclose(arq) != 0)
            printf("Erro: arquivo %s não pôde ser fechado.\n", nomeArq);
        return NULL;
    }
    
    vetor = (float *)malloc((tam + 1) * sizeof(float));
    vetor[0] = tam;
    
    if (vetor == NULL) {
        printf("Erro: ao alocar memória para o vetor.\n");
        if(fclose(arq) != 0)
            printf("Erro: arquivo %s não pôde ser fechado.\n", nomeArq);
        return NULL;
    }
    for(int i = 1; i <= tam; i++){
        if(fscanf(arq, "%f", &vetor[i]) != 1){
            printf("Erro: arquivo %s está corrompido.\n", nomeArq);
            if(fclose(arq) != 0)
                printf("Erro: arquivo %s não pôde ser fechado.\n", nomeArq);
            return NULL;
        }
    }
    
    if(fclose(arq) != 0)
        printf("Erro: arquivo %s não pôde ser fechado.\n", nomeArq);

    return vetor; // retorna o ponteiro para o início do vetor
}