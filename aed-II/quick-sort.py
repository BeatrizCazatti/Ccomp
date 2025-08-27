from funcoes import gera_aleatorio, salva_vetores, carrega_vetores
from time import time

tmpInicio = time()


def particione(m, p, r):
    x = m[r]
    i = p - 1
    for j in range(p, r):
        if(m[j] <= x):
            i += 1
            m[i], m[j] = m[j], m[i]
    m[i+1], m[r] = m[r], m[i+1]
    return i + 1
    


def quick_sort(m, p, r):
    if(p < r):
        q = particione(m, p, r)
        quick_sort(m, p, q-1)
        quick_sort(m, q+1, r)


v1 = []
v2 = []
v3 = []

gera_aleatorio(v1, 100)
gera_aleatorio(v2, 1000)
gera_aleatorio(v3, 10000)

salva_vetores("quick-sort-entrada.txt", [v1, v2, v3])

carrega_vetores("quick-sort-entrada.txt", [v1, v2, v3])

quick_sort(v1, 0, len(v1)-1)
quick_sort(v2, 0, len(v2)-1)
quick_sort(v3, 0, len(v3)-1)

salva_vetores("quick-sort-saida.txt", [v1, v2, v3])

print(f"O algoritmo quick sort demorou {time() - tmpInicio}s")