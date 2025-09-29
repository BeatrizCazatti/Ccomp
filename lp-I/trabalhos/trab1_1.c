#include <stdio.h>
#include <stdlib.h>

int main () {
    int dia, mes, ano, diasAno = 0;
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &dia, &mes, &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        diasMes[1] = 29;
    }

    for(int i = 0; i < mes-1; i++){
        printf("%d\n", diasMes[i]);
        diasAno += diasMes[i];
    }

    printf("%d", (diasAno + dia));

    return 0;
}