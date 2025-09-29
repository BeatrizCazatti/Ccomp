#include <stdio.h>
#include "escalar.h"

float produto_escalar(const float* pvet1, const float* pvet2) {
    float resultado = 0;
    
    int tam = (int)pvet1[0];

    for (int i = tam; i >= 1; i--) {
        resultado += pvet1[i] * pvet2[i];
    }

    return resultado;
}