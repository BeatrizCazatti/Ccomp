#include <stdio.h>
#include "escalar.h"

float produto_escalar(float pvet1, float pvet2) {
    int tam = 0;
    tam = (int)pvet1[0];

    return (*pvet1)*(*pvet2) + produto_escalar(pvet1[tam-1], pvet2[tam-1]);
}