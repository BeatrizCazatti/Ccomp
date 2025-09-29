def contagemComVS(V1, p):
    #VS será o vetor de contagem (frequência)
    VS = [0] * (p + 1)

    #conta quantas vezes cada valor aparece em V1
    for i in range(len(V1)):
        VS[V1[i]] += 1

    #VA será o vetor de acumulação
    VA = [0] * (p + 1)
    VA[0] = VS[0]
    for i in range(1, p + 1):
        VA[i] = VA[i - 1] + VS[i]

    #V2 será o vetor ordenado
    V2 = [0] * len(V1)

    #preenche V2 com os elementos ordenados
    for i in range(len(V1) - 1, -1, -1):
        V2[VA[V1[i]] - 1] = V1[i]
        VA[V1[i]] -= 1

    return V2

V1 = [4, 2, 2, 8, 3, 3, 8]
p = 8
V2 = contagemComVS(V1, p)
print(V2)
