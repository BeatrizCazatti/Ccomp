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

#define MAX_CHAVE 255
struct node {
    int key;
    int occurrences;
    struct node *nextNode;
};

int inserir(struct node **histograma, int num);
int buscar_ocorrencias(struct node *histograma, int num);
void liberar(struct node *histograma);

int main () {
    struct node *histograma = NULL;
    int num;

    char nomeArq[16];
    scanf("%s", nomeArq);


    FILE *fp = fopen(nomeArq, "r");
    if(!fp){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        if (num >= 0 && num <= MAX_CHAVE){
            if(inserir(&histograma, num) != 0){
                printf("Erro ao inserir");
            }
        }
    }

    fclose(fp);
    //imprime histograma de 0 a 255
    for (int i = 0; i <= MAX_CHAVE; i++) {
        int ocorrencias = buscar_ocorrencias(histograma, i);
        printf("%d\t%d\n", i, ocorrencias);
    }

    liberar(histograma);
    return 0;
}

int inserir(struct node **histograma, int num){
    struct node *anterior = NULL;
    struct node *atual = *histograma;

    while (atual != NULL && atual->key < num) {
        anterior = atual;
        atual = atual->nextNode;
    }

    //numero já está no histograma, só incrementa ocorrencias
    if(atual != NULL && atual->key == num){
        atual->occurrences++;
        return 0;
    }

    //cria um novo nó: aloca dinamicamente o tamanho para essa struct e depois atribui os valores a cada membro
    struct node *novo = malloc(sizeof(struct node));
    if (!novo) {
        perror("Erro na alocação");
        return 2;
    }
    novo->key = num;
    novo->occurrences = 1;
    novo->nextNode = atual;

    //inserção no início
    if (anterior == NULL) {
        *histograma = novo;
    } else {
        anterior->nextNode = novo;
    }
    return 0;
}


int buscar_ocorrencias(struct node *histograma, int num){
    struct node *p = histograma;
    while(p != NULL){
        if(p->key == num)
            return p->occurrences;
        if(p->key > num)
            break;
        p = p->nextNode;
    }
    return 0;
}

//void liberar(struct node *histograma)
void liberar(struct node *histograma) {
    while (histograma != NULL) {
        struct node *aux = histograma;
        histograma = histograma->nextNode;
        free(aux);
    }
}