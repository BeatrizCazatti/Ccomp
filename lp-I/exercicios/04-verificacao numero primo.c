/*Escreva um algoritmo que leia um número inteiro e determine se o número é primo ou não. Imprimir o resultado da seguinte forma: “<numero> primo” ou “<numero> nao primo”, onde <numero> é o valor inteiro de entrada.

Exemplo:

Entrada: 7
Saída: 7 primo

Entrada: 9
Saída: 9 nao primo*/

#include <stdio.h>

int eh_primo (int num) {
    if(num <= 1){
        return 0;
    } 
    for(int i = 2; i < num; i++){
        if(num % i == 0){ //tem divisor ou 0 ou 1 => nao eh primo, retorna falso(0)
            return 0;
        }
    }
    return 1;    
}

int main () {
    int num;

    scanf("%d", &num);
    if(eh_primo(num)){
        printf("%d primo", num);
    }else{
        printf("%d nao primo", num);
    }

    return 0;
}