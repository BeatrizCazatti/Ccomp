#ifndef HEADER_H
#define HEADER_H

struct no {
    int chave;
    struct no *prox;
};

struct no *cria_no(int); //retorna um ponteiro      passa como parametro um ponteiro    Circulo já é um ponteiro
struct no *cria_lista(int);
void imprime_lista(struct no*); 
void caminha_lista(int, struct no**); //parametro é um apontador de apontador, portanto o parametro deve ser passado como &Circulo(p o endereço do apontador Circulo )
void exclui_no_seguinte(struct no*);

#endif