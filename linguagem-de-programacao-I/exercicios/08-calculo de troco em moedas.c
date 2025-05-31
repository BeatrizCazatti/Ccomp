/*Escreva um algoritmo que receba dois valores numéricos reais de entrada, total a pagar e valor pago, e retorne o troco a ser pago com o menor número de moedas de real (R$) possível. O texto retornado deve conter a descrição conforme detalhado abaixo, onde n representa a quantidade de moedas, com cada grupo de moedas de mesmo valor separados por vírgula.

"n moeda(s) de 1 real"
"n moeda(s) de 50 centavos"
"n moeda(s) de 25 centavos"
"n moeda(s) de 10 centavos"
"n moeda(s) de 5 centavos"
"n moeda(s) de 1 centavo"


Se total a pagar e valor pago forem iguais, imprimir:
"Sem troco"

Se valor pago for menor que total a pagar, imprimir:
"Valor pago insuficiente"


Exemplo:

Entrada: 0.37 2
Saída: 1 moeda(s) de 1 real, 1 moeda(s) de 50 centavos, 1 moeda(s) de 10 centavos, 3 moeda(s) de 1 centavo
*/

#include <stdio.h>

int troco (float *restante, float num) {
    int n = 0;
    while(*restante >= num){
        *restante = *restante - num;
        n++;
    }
    return n;
}

int main () {
    float total, pago, restante;

    scanf("%f %f", &total, &pago);

    if(total == pago) {
        printf("Sem troco");
    }else if (total > pago) {
        printf("Valor pago insuficiente");
    } else {
        restante = pago - total;
        //printf("rest: %f\n\n", restante);
    
        printf("%d moeda(s) de 1 real\n", troco(&restante, 1.00));
        printf("%d moeda(s) de 50 centavos\n", troco(&restante, 0.50));
        printf("%d moeda(s) de 25 centavos\n", troco(&restante, 0.25));
        printf("%d moeda(s) de 10 centavos\n", troco(&restante, 0.10));
        printf("%d moeda(s) de 1 centavo", troco(&restante, 0.01));
    }
    return 0;
}