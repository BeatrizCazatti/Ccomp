<<<<<<< HEAD
# p quantidade de tipos de moedas
# q quantia a ser calculada
p = 6
q = 26
V = [1, 5, 10, 25, 50, 100]

T = [[-1 for _ in range(q+1)] for _ in range(p)]
#mostrar tabela
for linha in T:
    print(linha)

def troco(p, q):
    if q < 0:
        return 0
    if q == 0:
        return 1
    if p == 0 and q != 0:
        return 0
        
    if T[p-1][q-1] != -1:
        return T[p-1][q-1]
    
    # 1. Usando a moeda atual: troco(p, q - V[p - 1])
    # 2. Não usando a moeda atual: troco(p - 1, q)
    T[p-1][q-1] = troco(p, q - V[p - 1]) + troco(p - 1, q)
    
    return T[p-1][q-1]

print(troco(p, q))

for i, j in enumerate(T):
    print(f'{T[i][j]}')
=======
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
>>>>>>> 16f63874a099b75b8e653fe8c0ffad50f05202a4
