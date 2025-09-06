#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int p = atoi(argv[2]);

    imprime_lista(NULL);

    struct no* Circulo = cria_lista(n);
    imprime_lista(Circulo);

    caminha_lista(n-1, &Circulo);  

    imprime_lista(Circulo);

    for (int i = 1; i < n; i++){
        caminha_lista(p-1, &Circulo);  
        exclui_no_seguinte(Circulo);  
        imprime_lista(Circulo);
    }
    return 0;
}