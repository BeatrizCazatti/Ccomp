#include <stdio.h>
#include "escalar.h"

float produto_escalar(const float* pvet1, const float* pvet2) {
    float resultado = 0;
    
    int tamanho = (int)pvet1[0];

    for (int i = tamanho; i >= 1; i--) {
        resultado += pvet1[i] * pvet2[i];
    }

    return resultado;
}