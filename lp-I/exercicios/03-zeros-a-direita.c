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
    scanf("%d", &N);
    
    int vetor[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int troca = 0;

    for (int i = 0; i < N; i++) {        
        int j = i;
        //Se não for o primeiro e o anterior for zero e o atual não, trocamos
        while(j > 0 && vetor[j - 1] == 0 && vetor[j] != 0) {
            troca = vetor[j];
            vetor[j] = vetor[j - 1];
            vetor[j - 1] = troca;
            //zeros consecutivos
            j--;
        }
    }

    for(int i = 0; i < N; i++) printf("%d ", vetor[i]);
    
    return 0;
}