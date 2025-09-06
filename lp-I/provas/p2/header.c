#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// struct no *cria_lista(int n){
//     struct no *phead = NULL;
//     struct no *prev = NULL;
//     struct no *atual = NULL;
    
//     for(int i = 1; i <= n; i++){
//         atual = cria_no(i);
//         //se a lista estiver vazia
//         if(phead == NULL){
//             phead = atual;
//         }else{
//             //liga os nós para não ter vazamento de memória(perder o encadeamento de nos)
//             prev->prox = atual;
//         }
//         //atualiza o anterior
//         prev = atual;
//     }
//     //cria lista circular
//     atual->prox = phead;
//     return phead;
// }
struct no * cria_lista (int n){
    struct no **atual = NULL;
    struct no *phead = cria_no(1);

    atual = &phead;

    for(int i = 2; i <= n; i++){
        atual = &((*atual)->prox);
        *atual = cria_no(i);
    }
    (*atual)->prox = phead;
    return phead;
}

//não tem prev, nem precisa verificar se inicio == NULL, porque a linkagem com o no anterior deve ser feita ao criar a lista bem como a verifição se alista está vazia
struct no *cria_no(int n){
    struct no *novoNo = malloc(sizeof(struct no));
    novoNo->chave = n;
    novoNo->prox = NULL;
    return novoNo;
}
//com um nó auxiliar deve ir percorrendo toda a lista e imprimindo as chaves de cada no 
void imprime_lista(struct no *phead){
    struct no *aux = phead;
    if(aux == NULL){
        printf("Lista Vazia!");
    }else{
        do{
            printf("%d ", aux->chave);
            aux = aux->prox;
        }while(aux != phead);
    }
    printf("\n");
    return;
}

//andar com phead apontando sempre esse para o atual->prox e retornar para onde ele está apontando
//excluir o no *caminha_lista->next
void caminha_lista(int p, struct no **Circulo){
    for(int i = 1; i < p; i++){
        *Circulo = (*Circulo)->prox;
    }
    // printf("Excluindo %d", (*Circulo)->prox->chave);
}

//recebe um apontador ele deve 
void exclui_no_seguinte(struct no *prev){
    struct no *alvo = prev->prox;
    prev->prox = alvo->prox;
    //printf("Excluindo: %d\n", alvo->chave);
    free(alvo);
}