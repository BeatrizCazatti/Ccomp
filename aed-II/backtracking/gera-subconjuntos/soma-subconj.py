def SomaSub(ns, t):
    global s
    i = t
    while i < n:
        P[ns] = C[i]
        s += C[i]
        if s == soma:
            print(P[:ns + 1])
        else:
            SomaSub(ns + 1, i + 1)
        s -= C[i]
        i += 1
        

C = [1, 2, 2, 3, 4, 5, 9, 15]
C.sort()

n = len(C)
P = [0] * n

soma = 4
s = 0

SomaSub(0, 0)