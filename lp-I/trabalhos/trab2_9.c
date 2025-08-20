//Faça um programa que calcule o produto escalar entre dois vetores com n elementos. Seu programa deve receber como entrada o número de elementos, seguido de todos os elementos do primeiro vetor e finalmente de todos os elementos do segundo vetor. O produto escalar deve ser impresso na tela do terminal

#include <stdio.h>

int main () {
    int n=0;
    float resultado;
    
    scanf("%d", &n);
    int v1[n], v2[n];

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        v1[i] = num;
    }
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        v2[i] = num;
    }
    for(int i = 0; i < n; i++){
        resultado += v1[i] * v2[i];
    }

    printf("%.1f", resultado);

	return 0;
}
