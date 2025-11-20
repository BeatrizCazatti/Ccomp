def comb(np):
    for i in range(n):
        if np == 0 or i + 1 > P[np - 1]:
            P[np] = i + 1
            if np == q - 1:
                print(P)
            else:
                comb(np + 1)
        


n, q = 3, 2
P = [0] * q
comb(0)