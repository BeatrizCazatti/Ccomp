/*Escreva um programa que retorne o número de palavras que contém uma frase, com no máximo 1024 caracteres, fornecida pelo canal padrão. Considere que qualquer separação por espaço, ponto, vírgula, ponto e vírgula, dois pontos, enter ou tab  termina uma palavra. Também considere que palavras com hífen como só uma palavra.
Nesta versão, você deve usar o comando switch e implementar sua própria máquina de estados. Use como referência o diagrama de estados a seguir. Nele, os círculos representam os estados e as setas representam a mobilidade de estados em função do caractere lido.(.\maquina_estado.png)

Ex: Vou ao mercado.
Resultado: 3

Ex: É preciso tomar o anti-inflamatório.
Resultado: 5*/

#include <stdio.h>
#include <ctype.h>

#define OUT 0
#define IN 1

int main () {
    char frase[1024];
    int estado = OUT, quant = 0, i = 0;
    char caracter;

    fgets(frase, sizeof(frase), stdin);
    
    while((caracter = frase[i]) != '\0'){
        switch (caracter) {
            case ' ': case ',': case ';': case '.': case ':':
                estado = OUT;
                break;

            default:
                if (isalnum(caracter) || caracter == '-') {
                    if (estado == OUT) {
                        quant++;      
                        estado = IN;
                    }
                } else {
                    estado = OUT;  
                }
                break;
        }
        i++;
    }

    printf("%d", quant);
    return 0;
}