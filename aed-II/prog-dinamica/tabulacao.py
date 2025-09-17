# algoritmo com preenchimento linha x coluna:

p = 6
n = 2
T = [[-1 for _ in range(p + 1)] for _ in range (n + 1)]

for linha in T:
    print(linha)

def moedas(p, n):
    for j in range(n):
        T[0][j] = 0
        for i in range(1, n+1):
            T[i][0] = 1
