#include <stdio.h>
#include "escalar.h"

float produto_escalar_recursivo(float vet1[], float vet2[], int n){
    if(n == 0){
        return 0;
    }
    
    return vet1[n]*vet2[n] + produto_escalar_recursivo(vet1, vet2, n-1);
}