/* Escreva um algoritmo que receba N valores numéricos inteiros e retorne um vetor movendo os zeros à direita e preservando a ordem dos demais elementos. Primeiramente, deve-se ler a quantidade de valores que serão informados e armazenar na variável N.

Exemplo:

Entrada:
7

1 0 1 2 0 1 3

Saída: 1 1 2 1 3 0 0
*/

#include <stdio.h>

int main () {
    int N = 0;
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &N);
    
    int vetor[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int troca = 0;
    for (int i = 0; i < N; i++) {
        while(vetor[i] == 0) {
            for(int j = i; j < N - 1; j++) {
                troca = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = troca;
            }
        }
    }

    for(int i = 0; i < N; i++) printf("%d ", vetor[i]);
    //10 0 0 1 2 0 3 0 4 0 5

    return 0;
}