#include <stdio.h>
#include <stdlib.h>


int main () {
    signed char parcela1, parcela2; //-128 a 127
    unsigned char soma;
    
    scanf("%hhd %hhd", &parcela1, &parcela2);

    soma = parcela1 + parcela2;
    printf("%hhX %hhd \n", parcela1, parcela1);
    printf("%hhX %hhd \n", parcela2, parcela2);
    printf("%hhX %hhd \n", (unsigned char)soma, soma);
    
    return 0;
}

