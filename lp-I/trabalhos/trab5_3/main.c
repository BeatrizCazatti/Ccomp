/*Escreva um programa organizado em múltiplos arquivos que calcule de forma recursiva o produto escalar entre dois vetores. Os vetores devem ser lidos a partir de arquivos texto e terão  um número indeterminado de elementos. Seu programa deve calcular o produto escalar de forma recursiva do último para primeiro elemento do vetor. Os arquivos de entrada possuem o seguinte formato: a primeira linha contém o número de elementos do vetor; cada uma das demais linhas do arquivo contém um número real referente a um dos elementos do vetor em ordem a partir do elemento com índice 0.

Condições de erro:

-No caso dos vetores terem tamanho diferente seu programa deve apresentar a mensagem de erro "Erro: os vetores possuem comprimentos distintos\n".
-No caso de algum arquivo ser inexistente, seu programa deve imprimir "Erro: arquivo nomeDoArquivo não foi encontrado\n".
-Em caso do arquivo estar incompleto, seu programa deve informar "Erro: arquivo nomeDoArquivo está corrompido.\n"
-No caso de problemas para fechar o arquivo, o programa deve informar "Erro: arquivo nomeDoArquivo não pôde ser fechado.\n"

   

- Organização do programa:
vetinput.h e vetinput.c:
     Respectivamente o protótipo e a implementação das funções responsáveis pela leitura do arquivo texto e a criação do array. O nome do arquivo deve necessariamente ser um parâmetro da função e o array lido deve ser um parâmetro de retorno. Retornar NULL indica ter havido algum problema neste processo.

escalar.h e escalar.c:
    Respectivamente o protótipo e a implementação da função recursiva que calcula o produto escalar.
 
main.c:
    Programa principal que lê o nome dos dois arquivos (um de cada vez), lê os vetores, calcula o produto escalar e apresenta o resultado com 3 casas decimais.

   Atenção, a função do cálculo do produto escalar deverá ser recursiva.*/
#include <stdio.h>
#include <stdlib.h>
#include "escalar.h"
#include "vetinput.h"

int main() {
    char nomeArq1[16], nomeArq2[16];
    float* pvet1 = NULL;
    float* pvet2 = NULL;
    
    scanf("%s", nomeArq1);
    scanf("%s", nomeArq2);
    
    pvet1 = le_arquivo(nomeArq1);
    if (pvet1 == NULL) {
        printf("Erro: arquivo %s não foi encontrado\n", nomeArq1);
        return 1;
    }
    pvet2 = le_arquivo(nomeArq2);
    if (pvet2 == NULL) {
        printf("Erro: arquivo %s não foi encontrado\n", nomeArq2);
        return 2;
    }
    
    if(pvet1[0] != pvet2[0]){
        printf("Erro: os vetores possuem comprimentos distintos\n");
        return 1;
    }
    
    int tam = (int)(pvet1[0]);
    printf("%.3f", produto_escalar_recursivo(pvet1, pvet2, tam));
    
    free(pvet1);
    pvet1 = NULL;
    
    free(pvet2);
    pvet2 = NULL;
    
    return 0;
}