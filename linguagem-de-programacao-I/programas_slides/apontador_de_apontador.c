#include <stdio.h>
#include <stdlib.h>

/*
Apontador Duplo em C é usado principalmente para:
- Modificar ponteiros dentro de funções (passar o endereço do ponteiro)
- Matrizes dinâmicas
*/

int main () {
    struct coord {
        short x, y;
    };
    
    //array dinamico de structs
    struct coord *clist;

    clist = malloc(2 * sizeof(*clist));
    //clist[5] = {struct coord, struct coord}
    (*(clist+1)).x = 2;
    clist[1].y = 3;
    printf("%hd\n", clist[1].x);
    printf("%hd", (clist+1)->y);
}