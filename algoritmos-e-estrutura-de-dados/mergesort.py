import math

def mergeSort(e, d, v):
    if e != d:
        i = math.floor((e+d)/2)
        mergeSort(e,i,v)
        mergeSort(i+1,d,v)
        mergeSegmento(e,d,i,v)

def mergeSegmento(e, d, i, v):
    """
    Mescla dois sub-arrays ordenados: v[e...i] e v[i+1...d].
    Assume que ambos os sub-arrays já estão ordenados.
    """
    n1 = i - e + 1  # Tamanho do sub-array esquerdo
    n2 = d - i      # Tamanho do sub-array direito

    le = [0] * n1
    ld = [0] * n2

    for x in range(0, n1):
        le[x] = v[e + x]
    for y in range(0, n2):
        ld[y] = v[i + 1 + y]

    # Mescla os arrays temporários de volta para v[e...d]
    x = 0  # Índice para le
    y = 0  # Índice para ld
    k = e  # Índice para o array principal v

    while x < n1 and y < n2:
        if le[x] <= ld[y]:
            v[k] = le[x]
            x += 1
        else:
            v[k] = ld[y]
            y += 1
        k += 1

    # Copia os elementos restantes de le, se houver
    while x < n1:
        v[k] = le[x]
        x += 1
        k += 1

    # Copia os elementos restantes de ld, se houver
    while y < n2:
        v[k] = ld[y]
        y += 1
        k += 1

v = [54,26,93,17,77,31,44,55,20]
mergeSort(0, len(v)-1, v)
print(v)