/*Escreva um algoritmo que leia um número inteiro positivo e exiba o próximo número maior que pode ser formado reorganizando os dígitos. Se não houver número maior possível, imprimir 0 (zero).

Dica: Converter o número inteiro para array de char para facilitar a manipulação dos dígitos.

Exemplos:

Entrada: 12 Saída: 21

Entrada: 513 Saída: 531

Entrada: 2017 Saída: 2071

Entrada: 33 Saída: 0*/

#include <stdio.h>
#include <stdlib.h>

//ordenaçao decrescente
void select_sort (char vetor[]){
    char troca = '0';
    int i = 0, j, maior;

    while(vetor[i] != '\0'){
        maior = i;
        j = i + 1;
        while(vetor[j] != '\0'){
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
            j++;
        }
        troca = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = troca;
        i++;
    }
}

int main () {
    int num, numOrdenado;
    char arrayNum[20];

    scanf("%d", &num);
    
    //converter inteiro p array de char(string)
    sprintf(arrayNum, "%d", num);
    
    select_sort(arrayNum);
    //converter array de char p inteiro
    numOrdenado = atoi(arrayNum);
    if(num == numOrdenado){
        printf("0");
    }else{
        printf("%d", numOrdenado);
    }
    return 0;
}