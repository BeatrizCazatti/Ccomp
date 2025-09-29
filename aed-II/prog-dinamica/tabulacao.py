# algoritmo com preenchimento linha x coluna:

p = 6
V = [1, 5, 10, 25, 50, 100]
n = 20
#T = [[-1 for _ in range(p + 1)] for _ in range (n + 1)]
T =[[]]

def moedas():
    for j in range(n):
        T[0][j] = 0
    for i in range(1, n+1):
        T[i][0] = 1
        for j in range(1, n+1):
            if j >= V[i]:
                T[i, j] = T[i, j-V[i]] + T[i-1, j]
            else:
                T[i, j] = T[i-1, j]

moedas()

for linha in T:
    print(linha)