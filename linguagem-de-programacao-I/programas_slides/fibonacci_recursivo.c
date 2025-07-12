/*
(a) Modifique a função recursiva Fibonacci para que a mesma mostre a quantidade de chamadas recursivas.
Use variáveis locais estáticas.

(b) Use um array (no escopo da função main) para armazenar a quantidade de chamadas de Fibonacci
para cada valor de n
*/

#include <stdio.h>

int fibo_a(int n);
int fibo_b(int n, int *ptrchamadas);

int main (){
    int chamadas[5];
    for(int i = 0; i < 5; i++) chamadas[i] = 0;
    printf("%d\n", fibo_a(4));
    printf("%d", fibo_b(4, chamadas));
    for(int i = 0; i < 5; i++) printf("\nchamadas_f%d: %d", i, chamadas[i]);
    return 0;
}

int fibo_a (int n) {
    static int chamadas = 0;
    chamadas ++;
    if (n < 2 && n >= 0) {
        return n;
    }
    printf("chamada_a: %d\n", chamadas);
    return fibo_a(n-1) + fibo_a(n-2);
}

int fibo_b(int n, int *ptrchamadas){
    ptrchamadas[n] ++;
    if (n < 2 && n >= 0) {
        return n;
    }
    return fibo_b(n-1, ptrchamadas) + fibo_b(n-2, ptrchamadas);
}
