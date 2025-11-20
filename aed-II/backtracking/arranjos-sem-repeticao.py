def arranjo(np):
    for i in range(n):
        if not S[i]:  
            P[np] = i + 1
            S[i] = True

            if np == q - 1:
                print(P)
            else:
                arranjo(np + 1)

            S[i] = False


n, q = 3, 2
P = [0] * q
S = [False] * n

arranjo(0)
