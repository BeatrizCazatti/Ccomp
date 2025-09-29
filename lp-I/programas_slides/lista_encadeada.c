#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bloco {
        short x, y;
        char *tag;
        struct bloco *next;
};

void imprimeElem(struct bloco *p);
struct bloco * criaElem(short x, short y);
void imprimeLista(struct bloco *p);
struct bloco * buscaElem(short x, short y, struct bloco *p);

int main () {
    struct bloco *p;
    //struct bloco primeiro;
    // struct bloco *phead = &primeiro;
    // primeiro.x = 2;
    // primeiro.y = 4;
    // primeiro.next = NULL;
    // primeiro.tag = "kerelho";

    struct bloco *phead = NULL;
    phead = criaElem(2, 7);

    
    struct bloco *segundo = criaElem(3, 9);
    
    phead->next = segundo;

    imprimeLista(phead);
    imprimeElem(buscaElem(3, 9, phead));
    
    return 0;
}

struct bloco * criaElem(short x, short y){
    struct bloco *p = malloc(sizeof(* p));
    p->x = x;
    p->y = y;
    p->next = NULL;
    return p;
}

void imprimeElem(struct bloco *p){
    if(p){
        printf("%hd %hd\n", p->x, p->y);
    }
    else
        printf("Elemento inexistente\n");
}

void imprimeLista(struct bloco *p){
    if(p){
        imprimeElem(p);
        imprimeLista(p->next);
    }else
        printf("Lista vazia!\n");
}

struct bloco * buscaElem(short x, short y, struct bloco *p){
    if(p){
        if((p->x == x) && (p->y == y)){
            printf("achei: ");
            return p;
        }else{
            return buscaElem(x, y, p->next);
        }
    }
    return NULL;
}