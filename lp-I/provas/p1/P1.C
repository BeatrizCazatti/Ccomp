#include <stdio.h>

int main () {
    char nomeArq[16], linha[36];
    float pixels[100], num;
    int colunas, linhas, maxVal, resto;

    scanf("%s", nomeArq);

    FILE *fp = fopen(nomeArq, "r");

    if(fp == NULL)
        perror("Erro: arquivo não encontrado\n");

    fgets(linha, sizeof(linha), fp); //P2
    fscanf(fp, "%d %d", &colunas, &linhas); 
    fgets(linha, sizeof(linha), fp);
    fscanf(fp, "%d", &maxVal);
    

    //carregar pixels
    for(int n = 0; n < linhas*colunas; n++){
        fscanf(fp, "%f", &pixels[n]);
    }
    
    //imprimir
    int n = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            resto = (int)pixels[n] % maxVal;

            if(resto == 0){ //divisao exata
                num = pixels[n] / maxVal;
                printf("(%d, %d)=%.0f ", i, j, num);
            }
            else{
                num = pixels[n] / maxVal;
                printf("(%d, %d)=%.1f ", i, j, num);
            }
            n++;    
        }        
    }
    
    if(fclose(fp))
        perror("Erro: sem sucesso no fechamento do arquivo.");

    return 0;
}