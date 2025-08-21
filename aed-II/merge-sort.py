from math import floor
import random

INTERVALO = 100

def gera_aleatorio(v, n):
    for i in range(n):
        v.append(random.randint(INTERVALO*(-1), INTERVALO))

v1 = []
v2 = []
v3 = []
gera_aleatorio(v1, 100)
gera_aleatorio(v2, 1000)
gera_aleatorio(v3, 10000)


def salva_vetores(nomeArquivo, vets):
    file = open(nomeArquivo, "w")
    for i in vets:
        file.write(f'{i}')
        file.write('\n')
    file.close()

salva_vetores("entrada.txt", [v1, v2, v3])



def carrega_vetores(nomeArquivo, vets):
    file = open(nomeArquivo, "r")
    for v in vets:
        for linha in file:
            v = linha
    file.close()

carrega_vetores("entrada.txt", [v1, v2, v3])



def merge_sort(v, p, r):
    if (p < r):
        q = floor((p + r)/2)
        merge_sort(v, p, q)
        merge_sort(v, q+1, r)
        merge(v, p, q, r)

def merge(v, p, q, r):
    n1 = q - p + 1
    n2 = r - q

    L = v[p : q+1]
    R = v[q+1 : r+1]


    i = j = 0
    k = p
    while i < n1 and j < n2:
        if(L[i] <= R[j]):
            v[k]  = L[i]
            i += 1
        else:
            v[k] = R[j]
            j += 1
        k += 1
    
    while i < n1:
        v[k] = L[i]
        i += 1
        k += 1

    while j < n2:
        v[k] = R[j]
        j += 1
        k += 1
    

merge_sort(v1, 0, len(v1)-1)
merge_sort(v2, 0, len(v2)-1)
merge_sort(v3, 0, len(v3)-1)

salva_vetores("saida.txt", [v1, v2, v3])