#include <stdio.h>
#include <stdlib.h>

double determinante (double matriz[3][3]) {
    double soma_principal = 0, soma_secundaria = 0;

    soma_principal += matriz[0][0] * matriz[1][1] * matriz[2][2];
    soma_principal += matriz[0][1] * matriz[1][2] * matriz[2][0];
    soma_principal += matriz[0][2] * matriz[1][0] * matriz[2][1];

    soma_secundaria += matriz[0][2] * matriz[1][1] * matriz[2][0];
    soma_secundaria += matriz[0][0] * matriz[1][2] * matriz[2][1];
    soma_secundaria += matriz[0][1] * matriz[1][0] * matriz[2][2];

    return soma_principal - soma_secundaria;
}

int main () {
    double matriz[3][3];   

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    printf("%.1lf", determinante(matriz));
}