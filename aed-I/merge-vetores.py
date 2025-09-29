def mergeVetores(V1, V2):
    i, j, k = 0, 0, 0
    n, m = len(V1), len(V2)
    V3 = [None] * (n + m)

    while i < n and j < m:
        if V1[i] <= V2[j]:
            V3[k] = V1[i]
            i += 1
        else:
            V3[k] = V2[j]
            j += 1
        k += 1

    # Copia o restante de V1, se houver
    while i < n:
        V3[k] = V1[i]
        i += 1
        k += 1

    # Copia o restante de V2, se houver
    while j < m:
        V3[k] = V2[j]
        j += 1
        k += 1

    return V3


V1 = [1, 2, 3, 4]
V2 = [4, 8, 9]
print(mergeVetores(V1, V2))
