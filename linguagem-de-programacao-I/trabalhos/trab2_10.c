#include <stdio.h>

int main () {
	int a=0, b=0, i=0;
	int quocientes[100];
	int divisores[100];
	int dividendos[100];
	int restos[100];
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	int maior = (a) > (b) ? (a) : (b);
	int menor = (a) < (b) ? (a) : (b);
	
	dividendos[0] = maior;
	divisores[0] = menor;
	
	while (menor != 0) {
        quocientes[i] = maior / menor;
        restos[i] = maior % menor;
        maior = menor;
        menor = restos[i];
        dividendos[i + 1] = maior;
        divisores[i + 1] = menor;
        i++;
    }
	
	for(int c = 0; c < i; c++) printf("%d\t", quocientes[c]);
	printf("\n"); for(int c = 0; c <= i; c++) printf("%d\t", dividendos[c]);
	printf("\n"); for(int c = 0; c < i; c++) printf("%d\t", restos[c]);

	return 0;
}