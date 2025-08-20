#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXTO 100000
#define CARACTERES " ,.-;:!\n\t"

struct no {
	char * palavra;
	int count;
	struct no * prox;
};

int busca(struct no ** lista, char * plvr) {
	struct no * aux = *lista;
	while (aux != NULL) {
		if (strcmp(plvr, aux->palavra) == 0) {
			aux->count++;
			return 1;
		}
		aux = aux->prox;
	}
	return 0;
}

void insere(struct no ** lista, char * plvr) {
	struct no * novo = (struct no *)malloc(sizeof(struct no)), * aux = *lista;
	novo->palavra = strdup(plvr);
	novo->count = 1;
	novo->prox = NULL;
	
	if (*lista == NULL || strcmp(plvr, (*lista)->palavra) < 0) {
		novo->prox = *lista;
		*lista = novo;
	} else {
		while (aux->prox != NULL && strcmp(plvr, aux->prox->palavra) > 0) {
			aux = aux->prox;
		}
		novo->prox = aux->prox;
		aux->prox = novo;
	}
	
}

void imprimir(struct no ** lista) {
	struct no * aux = *lista;
	while (aux != NULL) {
		printf("%s\t\t%d\n", aux->palavra, aux->count);
		aux = aux->prox;
	}
}
				
int main() {
	struct no * Histograma = NULL;
	
	char texto[MAX_TEXTO], * ptr;
	fgets(texto, MAX_TEXTO, stdin);
	
	ptr = strtok(texto, CARACTERES);
	while (ptr != NULL) {
		if (busca(&Histograma, ptr) == 0) {
			insere(&Histograma, ptr);
		}	
		ptr = strtok(NULL, CARACTERES);	
	}
	
	imprimir(&Histograma);
	
	struct no * aux = Histograma;
	while (Histograma != NULL) {
		aux = Histograma;
		Histograma = Histograma->prox;
		free(aux->palavra);
		free(aux);
	}
	
	return 0;
}
