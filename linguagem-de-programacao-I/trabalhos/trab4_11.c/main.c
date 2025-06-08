/*Faça um programa que leia um arquivo de imagem formato PGM variante P2 e imprima os valores dos pixels em hexadecimal. O nome do arquivo será fornecido pelo stream stdin. Caso o arquivo não seja encontrado, seu programa deve escrever no canal de erro a string "Erro: arquivo inexistente\n" e sua execução deve ser interrompida.

Seu programa deve usar uma única função para carregar os pixels e os dados relevantes do cabeçalho na memória ANTES de começar a impressão. A função que lê a imagem precisa ser refatorada dividindo-a em ao menos duas subfunções. Além disto, como você não tem como saber a priori a quantidade de pixels na imagem que será fornecida, você obrigatoriamente precisa colocá-los em um "array" dinâmico. 

Instruções para a impressão:

1- Cada linha da imagem deve ser impressa em uma linha de texto.
2 - Cada pixel impresso deve ocupar três caracteres de largura. Para tanto, use a formatação "%3X".
3 - Dois pixels seguidos impressos devem ser separados por um caractere espaço.
4 - O último pixel da linha de texto NÃO deve ser sucedido por um caractere espaço.*/

#include <stdio.h>
#include <string.h>
#include "carregar_pixels.h"

int main () {
    char nomeArquivo[16];
    
    scanf("%s", &nomeArquivo);
    strcpy(nomeArquivo, "exemplo.pgm");
    ler_cabecalho(nomeArquivo);

    return 0;
}
