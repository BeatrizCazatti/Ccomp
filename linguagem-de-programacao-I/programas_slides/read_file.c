#include <stdio.h>

//fgets()
//fgetc()

int main () {
    char linha[100], primeiroChar;
    int i=1;
    FILE *fp = fopen("arquivo.txt", "r");
    if(fp == NULL)
        perror("Erro ao tentar abrir!");

    while(fgets(linha, sizeof(linha), fp) != NULL){
        printf("Linha %d:%s\n", i, linha);
        i++;
    }


    fclose(fp);
    return 0;
}