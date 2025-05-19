/*Escreva um algoritmo que leia dois valores inteiros A e B, e imprima a soma de todos os inteiros no intervalo de A a B (inclusive). Se os valores A e B forem iguais, imprimir 0 (zero).

Exemplos:
    Entrada:
    A: 9
    B: 16
    Saída: 100 (9+10+11+12+13+14+15+16)

    Entrada:
    A: 15
    B: 10
    Saída: 75 (15+14+13+12+11+10)

    Entrada:
    A: 20
    B: 20
    Saída: 0
    Painel lateral
*/

#include <stdio.h>

int main () {
    int a, b, soma=0;

    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a != b){
        if(a > b){
            for(int i = 0; a-i >= b; i++){
                soma = soma + (a - i);
            }
        } else{
            for(int i = 0; a+i <= b; i++){
                soma = soma + (a + i);
            }
        }
    }
    
    printf("%d", soma);
    return 0;
}