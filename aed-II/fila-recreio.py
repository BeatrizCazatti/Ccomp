N = int(input())

def particione(notas, p, r):
    x = notas[r]
    i = p - 1
    for j in range(p, r):
        if(notas[j] <= x):
            i += 1
            notas[i], notas[j] = notas[j], notas[i]
    notas[i + 1], notas[r] = notas[r], notas[i + 1]
    return i + 1

def quick_sort(notas, notasOrig, p, r, numIguais):
    if(r > p):
        q = particione(notas, p, r)
        quick_sort(notas, notasOrig, q + 1, r, numIguais)
        quick_sort(notas, notasOrig, p, q - 1, numIguais)
        for q in range(len(notas)): 
          if notas[q] == notasOrig[-q - 1]: numIguais += 1
    return numIguais

for i in range(N):
    M = int(input())
    notas = [int(nota) for nota in input().split()]
    numIguais = quick_sort(notas, notas[:], 0, len(notas)-1, 0)
    print(numIguais)

