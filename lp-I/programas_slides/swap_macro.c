/*Defina uma macro swap (t, x, y) que troque os valores dos argumentos x e y ambos do tipo t.

(dica: utilize um bloco)*/

#include <stdio.h>

#define SWAP(t, x, y) { t temp = x; x = y; y = temp; }

int main() {
    int x = 30, y = 20;
    printf("x:%d y:%d\n", x, y);
    SWAP(int, x, y);
    printf("x:%d y:%d", x, y);
    return 0;
}