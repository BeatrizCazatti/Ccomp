def ehPossivel(l, c):
    for i in range(l):
        if P[i] == c:
            return False
        if i - P[i] == c - l:
            return False
        if i + P[i] == c + l:
            return False
    return True

def DamasPacificas(l):
    for c in range(n):
        if ehPossivel(l, c):
            P[l] = c
            if l == n - 1:
                print(P)
            else:
                DamasPacificas(l + 1)

n = 8
P = [0] * n
DamasPacificas(0)