# posição (l, c) fixa. Atua como uma “restrição”: a linha l e a coluna c já estão ocupadas e não podem ser usadas por outras torres.
def torresPacificas(np, l, c):
    for i in range(n):
        if not S[i]:
            P[np] = i + 1
            S[i] = True
            if np == n - 1:
                if P[c] == l:
                    print(P)
            else:
                torresPacificas(np + 1, l, c)
            S[i] = False


n = 8
l, c = 3, 5
P = [0] * n
S = [False] * n
torresPacificas(0, l, c)