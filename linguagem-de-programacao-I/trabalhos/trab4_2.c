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