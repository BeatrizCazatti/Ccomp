#include <stdio.h>
#include <stdlib.h>

struct no{
    int chave;
    struct no* prox;
};

struct no * cria_no(int n){
    struct no * novo = malloc(sizeof(struct no));
    novo->chave = n;
    novo->prox = NULL;
    return novo;
}

struct no * cria_lista(int n){
    struct no ** atual = NULL;
    struct no *primeiro = cria_no(1);

    if(n>=2){
        atual = &primeiro;
       for(int i = 2; i <= n; i++){
            //(*atual)->prox = cria_no(i); 
            
            atual = &((*atual)->prox);
            *atual =  cria_no(i);  
        }
    (*atual)->prox = primeiro;
    }
    return primeiro;
}

void imprime_lista(struct no *Circulo){
    if(Circulo) {
        struct no * primeiro = Circulo;
        //printf("%d ", primeiro->chave);
        struct no * p = primeiro;
        do{
            printf("%d ", p->chave);
            p = p->prox;
        }while(p != primeiro);
        printf("\n");
    }
    else
        printf("Lista Vazia\n");
}

void caminha_lista(int n, struct no **p) {
    for(int i = 0; i < n; i++){
        //p = (*Circulo)->prox;
        *p = (*p)->prox;
    }
    //;
}

void exclui_no_seguinte(struct no *Circulo){
    struct no* aux = Circulo->prox;
    Circulo->prox = Circulo->prox->prox;
    free(aux); 
}

int main(int argc, char* argv[]){
  
  int n, m ;
  sscanf(argv[1],"%d",&n); 
  sscanf(argv[2],"%d",&m); 
  imprime_lista(NULL);

  struct no* Circulo = cria_lista(n);
  imprime_lista(Circulo);

  caminha_lista(n-1,&Circulo);  
  //Circulo = Circulo->prox;
  imprime_lista(Circulo);

  for (int i=1; i < n; i++){
    caminha_lista(m-1, &Circulo);  
    exclui_no_seguinte(Circulo);  
    imprime_lista(Circulo);
  }

  return 0;
}