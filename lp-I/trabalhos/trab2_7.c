#include <stdio.h>

int incrementa(int *num) {
    return ++*num;
}

int main () {
    int num;
    scanf("%d", &num);
    
    printf("%d", incrementa(&num));
}