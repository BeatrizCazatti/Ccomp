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
struct no* inserir(int);
struct no* encontra_posicao(int);
void imprime_relatorio();


int main (int argc, char* argv[]){
    char *arq[20];
    *arq = argv[1];
    
    FILE *fp = fopen(*arq, "r");

    if(!fp) {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    //cria lista encadeada vazia:
    // struct no* phead == NULL;
    // phead->nextNode == NULL;
    int chave;

    //lê as chaves
    int num;
    struct no* atual = NULL;
    while(fscanf(fp, "%d", &num) == 1){
        atual = inserir(num);
        
    }

    //imprimir chaves
    for(int i = 0; i < MAX_CHAVE; i++){
        (phead->prox)
    }

    return 0;
}