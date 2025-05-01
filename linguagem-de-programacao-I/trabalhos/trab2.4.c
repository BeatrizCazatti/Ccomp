#include <stdio.h>
#include <stdlib.h>
void ordenarDecrescentemente(float *vetor, int n){
    for(int i = 0; i < n - 1; i++) {
        int indice_maior = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] > vetor[indice_maior]) {
                indice_maior = j;
            }
        }
        
        float aux = vetor[i];
        vetor[i] = vetor[indice_maior];
        vetor[indice_maior] = aux;
    }   
}
int main () {
    float *vetor;
    int n;

    scanf("%d", &n);

    //alocação dinâmica
    vetor = (float *)malloc(n * sizeof(float));

    for(int i=0; i < n; i++){
        scanf("%f", &vetor[i]);
    }

    ordenarDecrescentemente(vetor, n);

    for(int i=0; i < n; i++){
        printf("%.1f ", vetor[i]);
    }

    free(vetor);
}