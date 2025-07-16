#include <stdio.h>
#include <stdlib.h>

struct no {
    int chave;
    struct no *prox;
};

struct no * cria_no (int n){
    struct no *novo = malloc(sizeof(struct no));
    novo->chave = n;
    novo->prox = NULL;
    return novo;
}

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


void imprime_lista(struct no *inicio){
    if(inicio){
        struct no *p = inicio;
        do{
            printf("%d ", p->chave);
            p = p->prox;
        }while(p != inicio);
        printf("\n");
    }else{
        printf("Lista Vazia!\n");
    }
}

struct no * caminha_lista(struct no **Circulo, int m){
    for(int i = 1; i < m; i++){
        *Circulo = (*Circulo)->prox;
    }
    return *Circulo;
}

void exclui_no_seguinte(struct no *Circulo){
    struct no * aux = Circulo->prox;
    Circulo->prox = aux->prox;
    free(aux);
}

int main(int argc[], char *argv[]){
    int n, m;
    
    sscanf(argv[1], "%d", &n);
    sscanf(argv[2], "%d", &m);
    imprime_lista(NULL);

    struct no* Circulo = cria_lista(n);
    imprime_lista(Circulo);

    caminha_lista(&Circulo, n-1);  
    imprime_lista(Circulo);

    for (int i=1; i < n; i++){
        caminha_lista(&Circulo, m-1);  
        exclui_no_seguinte(Circulo);  
        imprime_lista(Circulo);
    }

  return 0;
}