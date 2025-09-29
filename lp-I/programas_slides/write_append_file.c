#include <stdio.h>

//fopen()
//perror()
//fputs()
//fclose()
//fputc()
//remove()

int main() {
    FILE *fp = fopen("arquivo.txt", "a");
    if(fp == NULL)
        perror("erro ao abrir o arquivo");
    fprintf(fp, "Beatriz Cazatti");
    fputs(" Figueiredo", fp);
    fputc('.', fp);
    
    fclose(fp);
    //remove("arquivo.txt");

    return 0;
}