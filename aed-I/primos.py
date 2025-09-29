def primos(n):
    marcados = [False] * (n + 1)
    lista = []

    for i in range(2, n + 1):
        if not marcados[i]:
            lista.append(i)
        for j in range(i, n + 1, i):
            marcados[j] = True

    print(marcados) 
    return lista

print(primos(15))