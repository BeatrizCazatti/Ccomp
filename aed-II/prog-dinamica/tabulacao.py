<<<<<<< HEAD
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
=======
# algoritmo com preenchimento linha x coluna:

p = 6
q = 10
V = [1, 5, 10, 25, 50, 100]

T = [[-1 for _ in range(q+1)] for _ in range (p)]

for i in range(q):
    T[0][i] = 0

for j in range(1, q):
    T[j][0] = 1

for linha in T:
    print(linha)

for i in range(1, p + 1):
    for j in range(1, q + 1):
        # sem usar a moeda i-1
        T[i][j] = T[i-1][j]
        # usando a moeda i-1 (se couber)
        if j - V[i-1] >= 0:
            T[i][j] += T[i][j - V[i-1]]


for linha in T:
>>>>>>> 16f63874a099b75b8e653fe8c0ffad50f05202a4
    print(linha)