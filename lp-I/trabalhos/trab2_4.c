#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char frase[1024];
    const char *delimitadores = " \t\n.,;:";
    int contador = 0;

    scanf(" %[^\n]", frase); //especificador de formato p conjunto de caracteres

    char *palavra = strtok(frase, delimitadores);

    while (palavra != NULL) {
        contador++;
        palavra = strtok(NULL, delimitadores);
    }

    printf("%d", contador);
    
    return 0;
}