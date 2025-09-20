# p quantidade de tipos de moedas
# q quantia a ser calculada
p = 2
q = 4
V = [1, 2]

T = [[-1 for _ in range(q + 1)] for _ in range(p + 1)]

def troco(p, q):
    if q < 0:
        return 0
    if q == 0:
        return 1
    if p == 0 and q != 0:
        return 0
        
    if T[p][q] != -1:
        return T[p][q]
    
    # 1. Usando a moeda atual: troco(p, q - V[p - 1])
    # 2. Não usando a moeda atual: troco(p - 1, q)
    T[p][q] = troco(p, q - V[p - 1]) + troco(p - 1, q)
    
    return T[p][q]

print(troco(p, q))

#mostrar tabela
for linha in T:
    print(linha)