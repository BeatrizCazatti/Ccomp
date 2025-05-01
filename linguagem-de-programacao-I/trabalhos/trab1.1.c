#include <stdio.h>
#include <stdlib.h>

int main () {
    int dia, mes, ano;
    int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    diasNoMes[1] = 29;
    printf("%d", diasNoMes);
    scanf("%d %d %d", &dia, &mes, &ano);
}