qtd = 0
def merge_sort(v, p, r):
    if (p < r):
        q = (p + r)//2
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
        if(L[i] <= v[k]):
            v[k] = L[i]
            i += 1
            qtd += 1
        else:
            v[k] = R[j]
            j += 1
            qtd += 1
        k += 1
    
    while i < n1:
        v[k] = L[i]
        i += 1
        k += 1

    while j < n2:
        v[k] = R[j]
        j += 1
        k += 1
    print(v)    


numeros = []
N = int(input("N: "))
while N != 0:
    for i in range(N):
        num = int(input("num: "))
        numeros.append(num)
    N = int(input("N: "))
print(numeros)
merge_sort(numeros, 0, len(numeros))
print(numeros)
print(qtd)
    