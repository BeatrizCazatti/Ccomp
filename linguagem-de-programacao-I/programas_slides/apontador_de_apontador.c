#include <stdio.h>
#include <string.h>

int main () {
    char* StringsArray[10];
    int* IntPointerArray [25];
    struct Estudante{
        char nome[255];
        char ID [12];
    };
    //struct Estudante* Turma[15];

    Estudante **turma = malloc(15 * sizeof(Estudante*)) //ponteiro para um array de ponteiros (um ponteiro de ponteiros).
    //turma[i]: ponteiro para um estudante individual.

    scanf("%[^\n]", &Turma[0]->nome); //lê até o \n: %[ ] → leia uma sequência de caracteres e ^ significa “exceto”,

    printf("%s", Turma[0]->nome);
}
