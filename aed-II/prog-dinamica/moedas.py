# p quantidade de tipos de moedas
# q quantia a ser calculada
p = 6
q = 20
V = [1, 5, 10, 25, 50, 100]

T = [[-1 for _ in range(q+1)] for _ in range(p)]

def troco(p, q):
    if q == 0:
        return 1
    if q < 0 or p == 0:
        return 0
    
    if T[p-1][q] != -1:
        return T[p-1][q]
    # usando a moeda atual: troco(p, q - V[p - 1])
    # não usando a moeda atual: troco(p - 1, q)
    T[p-1][q] = troco(p, q - V[p - 1]) + troco(p - 1, q)
    
    return T[p-1][q]

print(troco(p, q))

for linha in T:
    print(linha)