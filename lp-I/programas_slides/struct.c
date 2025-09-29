#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    struct bloco {
        short x, y;
        char * palavra;
        struct bloco *next;
    };
    
    struct bloco *phead = NULL;
    struct bloco primeiro;

    char nome[16] = "palavrinha";
    primeiro.x = 2;
    primeiro.y = 3;
    primeiro.palavra = nome;
    //ou: strcpy(primeiro.palavra, nome);

    printf("primeiro.x = %hd\n", primeiro.x);
    printf("primeiro.x = %hd\n", primeiro.y);
    printf("primeiro.x = %s\n", primeiro.palavra);

    // struct coord * criaElem(short x, short y){
    //     struct coord * p = malloc(sizeof(* p));
    //     p->x = x;
    //     p->y = y;
    //     p->next = NULL;
    //   return p;
    // }

    return 0;
}