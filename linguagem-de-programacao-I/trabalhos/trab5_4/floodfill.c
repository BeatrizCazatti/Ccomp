#include <stdio.h>
#include "floodfill.h"

#define NUM_LINHAS 20
#define NUM_COLUNAS 20

void flood_fill_recursivo(char matriz[NUM_LINHAS][NUM_COLUNAS], int x, int y) {
    if (x < 0 || x >= NUM_LINHAS || y < 0 || y >= NUM_COLUNAS) //se está dentro dos limites da matriz
        return;

    if (matriz[x][y] != ' ')
        return;

    matriz[x][y] = 'X'; 

    flood_fill_recursivo(matriz, x - 1, y); 
    flood_fill_recursivo(matriz, x + 1, y); 
    flood_fill_recursivo(matriz, x, y + 1); 
    flood_fill_recursivo(matriz, x, y - 1); 
}