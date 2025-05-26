/*Escreva um algoritmo que leia um conjunto de N números inteiros positivos e retorne a mediana. O programa deve permitir a entrada de valores até que seja informado o valor 0 (zero) ou até N = 100.

Obs: Se nenhum valor for inserido, imprimir 0. Desconsiderar do cálculo os valores negativos inseridos.

Exemplos:

Entrada: 26, 83, 71, 2, 45
Saída: 45

Entrada: 5 10 15 20 25 30
Saída: 20

Entrada: 0
Saída: 0*/

#include <stdio.h>

//ordenacao
void select_sort (int vetor[], int tam){
    int menor, troca;
    for (int i = 0; i < tam - 1; i++) {
        menor = i;
        for (int j = i + 1; j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        troca = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = troca;
    }
}

float mediana(int vetor[], int qtd){
    if(qtd % 2 == 0){
        return (vetor[(qtd / 2) - 1] + vetor[qtd / 2]) / 2.00;
    }else{
        return vetor[qtd / 2];
    }
}
int main () {
    int N = 0, qtd = 0;

    int vetor[100];
    
    do {
        scanf("%d", &N);
        if(N == 0){
            break;
        }else if(N > 0){
            vetor[qtd] = N;
            qtd += 1;
        }
    } while (qtd < 100);
    if(qtd == 0){
        printf("0");
    }else{
        select_sort(vetor, qtd);
        printf("%.2f", mediana(vetor, qtd));
    }

}