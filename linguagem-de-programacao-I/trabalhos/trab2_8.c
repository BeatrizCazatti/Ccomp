#include <stdio.h>

int main () {
    int primo[1000 + 1];

    for (int i = 2; i <= 1000; i++) {
        //todos verdadeiros(desmarcados)
        primo[i] = 1;
    }

    for (int i = 2; i * i <= 1000; i++) {
        if (primo[i]) {
            for (int j = i * i; j <= 1000; j += i) {
                //marca os múltiplos
                primo[j] = 0;
            }
        }
    }

    for (int i = 2; i <= 1000; i++) {
        if (primo[i]) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}