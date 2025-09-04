/*Escreva um algoritmo para ler valores inteiros diferentes de 0 (zero) na entrada padrão e em seguida gravá-los em uma estrutura de lista encadeada. Implementar struct para representar o cada Nó contendo ponteiro para o próximo nó. Exibir o último nó inserido. Caso não haja nenhum elemento na lista, imprimir:

"A lista esta vazia."

Exemplo:

Entrada:
10 20 30 20 0
Saída: 20

Entrada: 0
Saída: A lista esta vazia.*/

#include <stdio.h>
#include <stdlib.h>

struct no {
    int valor;
    struct no *prox;
};

struct no *cria_lista (int num) {
    int valor = num;
    
}
int main() {
    int num;
    do {
        scanf("%d", &num);
        printf("%d", num);
    } while (num != 0);
    return 0;
}