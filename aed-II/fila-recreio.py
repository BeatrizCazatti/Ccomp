N = int(input())
filaOriginal = []

for i in range(N):
    somaNotas = 0 
    M = int(input())
    notas = [int(nota) for nota in input().split(" ")]
    filaOriginal.append(notas)

#Ordenação
def particione(fila, p, r):
    x = fila[r]
    i = p - 1
    for j in range(p, r):
        if(fila[j] <= x):
            i += 1
            fila[i], fila[j] = fila[j], fila[i]
        fila[i+1], fila[r] = fila[r], fila[i+1]
        return i + 1
    
def quick_sort(fila, p, r):
    if(r > p):
        q = particione(fila, p, r)
        quick_sort(fila, q+1, r)
        quick_sort(fila, p, q-1)

filaOrdenada = filaOriginal.copy()
for fila in filaOrdenada:
    quick_sort(fila, 0, len(fila)-1)
print(filaOriginal)
print(filaOrdenada)

for i in range(len(filaOriginal)):
    numIguais = 0
    for j in range(len(filaOriginal[i])):
        if(filaOriginal[i][j] == filaOrdenada[i][-j-1]):
            numIguais += 1
    print(numIguais)