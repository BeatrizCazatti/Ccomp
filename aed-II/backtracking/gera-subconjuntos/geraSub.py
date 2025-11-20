def GeraSub(ns, t):
    for i in range(t, n + 1):
        P[ns] = i
        print(P[:ns+1])
        if i < n:
            GeraSub(ns + 1, i + 1)

n = 4
P = [0] * 4
GeraSub(0, 1)
