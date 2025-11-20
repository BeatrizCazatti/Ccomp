def arranjo(np):
    for i in range(n):
            P[np] = i + 1

            if np == q - 1:
                print(P)
            else:
                arranjo(np + 1)

n, q = 3, 2
P = [0] * q

arranjo(0)
