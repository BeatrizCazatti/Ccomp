/*O programa inicia com a lista encadeada vazia. A medida que os números são lidos, a lista é modificada, sendo também requisito do programa que a lista
esteja sempre em ordem crescente de chave numérica Caso o número não exista na lista, um novo nó é incluído na mesma, mantendo-a em ordem. Este novo nó
deve ter o campo key preenchido com o número lido, enquanto o campo occurrences deve receber o valor um (por tratar-se da primeira ocorrência desta
chave). Caso a chave já exista na lista, o respectivo nó terá o campo occurrences incrementado de uma unidade. O nome do arquivo de entrada precisa ser
fornecido como argumento de linha de comando. O relatório final com o histograma deve apresentar o número de ocorrências de todos os valores de chaves
inteiras entre zero e 255 em ordem crescente, incluindo as chaves que não apareceram no arquivo. Apesar de não constarem na lista encadeada, os valores
devem aparecer com o respectivo número de ocorrências zerado. No relatório, cada valor chave e o número de ocorrências correspondente devem ser
apresentados em uma linha na tela do terminal. As funções que trabalham com a lista encadeada não podem ser recursivas.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAVE 20

struct no {
    int key;
    int occurrences;
    struct no* nextNode;
};

//int le_arquivo(arq);
int inserir(int, struct no**);
//int procurar(int, struct no*);
//void imprime_relatorio();


int main (int argc, char* argv[]){
    char *arq[20];
    *arq = argv[1];
    
    FILE *fp = fopen(*arq, "r");

    if(!fp) {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    //lê as chaves
    int num;
    struct no* histograma = NULL;
    while(fscanf(fp, "%d", &num) == 1){
        for(int i = 0; i < MAX_CHAVE; i++){
            inserir(num, &histograma);
        }
    }
    //imprimir relatorio
    for(int j = 0; j < MAX_CHAVE; j++){
        struct no *p = histograma;
        while(p != NULL){
            if(p->key == j)
                printf("%d\n", p->occurrences);
            if(p->key > j)
                break;
            p = p->nextNode;
        }
        printf("0\n");
    }
}

int inserir(int chave, struct no**histograma){
    struct no* anterior = NULL;
    struct no* atual = *histograma;
    
    while(atual != NULL && atual->key < chave){
        anterior = atual; //////////
        atual = atual->nextNode;
    }
    
    //numero já está na lista só incrementa as ocorrencias
    if(atual != NULL && atual->key == chave){ ///////////////
        atual->occurrences++;
        return 0; ///////////
    }
    
    struct no *novo = malloc(sizeof(struct no));
    novo->key = chave;
    novo->occurrences = 1;
    novo->nextNode = NULL;
    
    //insercao no inicio
    if(anterior == NULL){
        *histograma = novo;
    }else{
        anterior->nextNode = novo;
    }
    return 0;
}