def merge_sort(v, p, r):
    qtdInv = 0
    if (p < r):
        q = (p + r)//2
        qtdInv = merge_sort(v, p, q)
        qtdInv += merge_sort(v, q+1, r)
        qtdInv += merge(v, p, q, r)
    return qtdInv

def merge(v, p, q, r):
    qtdInv = 0
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
            qtdInv += (n1 - i)
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
    return qtdInv


numeros = [int(num) for num in input().split()]
while numeros[0] != 0:
    qtdInv = merge_sort(numeros[1:], 0, len(numeros) - 2)
    print("Carlos" if qtdInv % 2 == 0 else "Marcelo")
    numeros = [int(num) for num in input().split()]