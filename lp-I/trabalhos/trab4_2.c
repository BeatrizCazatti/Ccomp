/*Faça um programa que conte o número de caracteres imprimíveis, o número de linhas e o número total de caracteres de um arquivo. O nome do arquivo deve ser fornecido pelo teclado.

Saída fornecida pelo seu programa:
- Caso ocorra erro de arquivo, o programa deve imprimir: "Erro no arquivo %s\n" onde %s é substituído pelo nome do arquivo tal qual fornecido pelo teclado.
- Caso o arquivo de entrada esteja disponível, o programa deve imprimir: Numero de caracteres lidos + \n + número de caracteres imprimíveis lidos + \n + número de linhas + \n*/

#include <stdio.h>
#include <ctype.h>

int main () {
    char nomeArquivo[16], linha[100];
    int c;
    int numCharImpri=0, numLinha=0, totalChar=0;

    scanf("%s", &nomeArquivo);

    FILE *fp = fopen(nomeArquivo, "r");

    if(fp == NULL){
        fprintf(stderr, "Erro no arquivo %s\n", nomeArquivo);
        return 1;
    }

    while((c = getc(fp)) != EOF){
        if(isprint(c))
            numCharImpri += 1;
        if(c == '\n')
            numLinha += 1;
        totalChar += 1;
    }
    printf("%d\n", totalChar);
    printf("%d\n", numCharImpri);
    printf("%d\n", numLinha);
    return 0;
}