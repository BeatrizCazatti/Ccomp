N = int(input())

#Ordenação
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
        print(f"q: {q}. {notas} e {notasOrig}")
        if notas[q] == notasOrig[-q - 1]: numIguais += 1
        quick_sort(notasOrig, notas, q + 1, r, numIguais)
        quick_sort(notasOrig, notas, p, q - 1, numIguais)

    return numIguais

for i in range(N):
    M = int(input())
    notas = [int(nota) for nota in input().split(" ")]

    print(notas)
    numIguais = quick_sort(notas, notas[:], 0, len(notas)-1, 0)
    print(numIguais)
    print(notas)
