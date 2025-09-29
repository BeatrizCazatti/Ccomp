/*Escreva uma função maxmin que receba dois argumentos do tipo float, max e min. Independentemente de quem seja o maior dos parâmetros no momento da chamada da função, ao final da execução de maxmin, max deve conter o maior dos argumentos e min o menor. Este resultado deve se refletir na função chamadora. */

#include <stdio.h>

void maxmin(float* max, float* min);
void copy(char* ptrword1, char* ptrword2);

int main(){
    float max = 10, min = 20;
    printf("max:%.2f min:%.2f\n", max, min);
    maxmin(&max, &min);
    printf("max:%.2f min:%.2f\n", max, min);

    char word1[16] = "array de char", word2[16] = "string";
    printf("word1:%s word2:%s\n", word1, word2);
    copy(word1, word2);
    printf("word1:%s word2:%s\n", word1, word2);
    return 0;
}

void copy(char* ptrword1, char* ptrword2) {
    while ((*(ptrword1++) = *(ptrword2++)) != '\0');
}

void maxmin(float* ptrmax, float* ptrmin) {
    float temp = 0;
    if (*ptrmax < *ptrmin){
        temp = *ptrmax;
        *ptrmax = *ptrmin;
        *ptrmin = temp;
    }
}