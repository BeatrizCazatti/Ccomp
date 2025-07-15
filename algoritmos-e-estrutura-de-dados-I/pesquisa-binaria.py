def pB(V, k): #Dados: Vetor V ordenado, inteiro k
    c = 0
    f = len(V)

    while c <= f:
        i = (c+f)//2
        if V[i] == k:
            break
        elif V[i] > k:
            f = i - 1
        else:
            c = i + 1
    return i

V = [1, 2, 3, 4, 5, 6]
k = 1
indice = pB(V, k)
if V[indice] == k:
    print(f'A chave {k} foi encontrada na posição {indice}')
else:
    print(f'O vetor não possui a chave {k}')