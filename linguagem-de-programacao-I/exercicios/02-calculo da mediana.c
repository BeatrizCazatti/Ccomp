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
#include <stdlib.h>

int main () {
    int N;

    scanf("%d", &N);
    
    while (N != 0 && N != 100) {
        scanf("%d", &N);
    }
}