/*Crie um programa na linguagem C que apresente na tela os
tamanhos dos tipos primários da linguagem (char, short, int,
long, long long, float, double e long double).
*/

/*OBS: O operador sizeof indica a quantidade de armazenamento, em bytes, 
necessária para armazenar um objeto do tipo do operando. Esse operador permite 
que você evite especificar tamanhos de dados dependentes do computador em seus 
programas.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("sizeof(char): %zu byte\n", sizeof(char));
    printf("sizeof(short): %zu bytes\n", sizeof(short));
    printf("sizeof(int): %zu bytes\n", sizeof(int));
    printf("sizeof(long): %zu bytes\n", sizeof(long));
    printf("sizeof(long long): %zu bytes\n", sizeof(long long));
    printf("sizeof(float): %zu bytes\n", sizeof(float));
    printf("sizeof(double): %zu bytes\n", sizeof(double));
    printf("sizeof(long double): %zu bytes\n", sizeof(long double));

    /*SAIDA:
    sizeof(char): 1 byte
    sizeof(short): 2 bytes
    sizeof(int): 4 bytes
    sizeof(long): 4 bytes
    sizeof(long long): 8 bytes
    sizeof(float): 4 bytes
    sizeof(double): 8 bytes
    sizeof(long double): 12 bytes
    */
    return 0;
}