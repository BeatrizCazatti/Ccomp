def inicializa(capacidade):
    global V, f, r, m
    m = capacidade
    V = [None] * m
    f = -1
    r = -1

def vazia():
    return f == -1

def cheia():
    return (r + 1) % m == f

def enfila(x, y):
    global V, f, r
    if cheia():
        return  # Ignora se cheia
    if vazia():
        f = 0
        r = 0
    else:
        r = (r + 1) % m
    V[r] = (x, y)

def desenfila():
    global V, f, r
    if vazia():
        return None
    k = V[f]
    if f == r:
        f = -1
        r = -1
    else:
        f = (f + 1) % m
    return k

def enfilaPt(M, T, a, b):
    linhas = len(M)
    colunas = len(M[0])
    
    # Verifica se (a, b) está dentro dos limites e ainda não colorido
    if 0 <= a < linhas and 0 <= b < colunas and T[a][b] != 'azul':
        T[a][b] = 'azul'
        enfila(a, b)

def coloracao(M, u, w):
    linhas = len(M)
    colunas = len(M[0])
    
    # Matriz de marcação (cores)
    T = [['branco' for _ in range(colunas)] for _ in range(linhas)]

    inicializa(linhas * colunas)
    
    enfila(u, w)
    T[u][w] = 'azul'
    
    while not vazia():
        a, b = desenfila()
        
        enfilaPt(M, T, a - 1, b)
        enfilaPt(M, T, a, b - 1)
        enfilaPt(M, T, a + 1, b)
        enfilaPt(M, T, a, b + 1)
    
    return T

def enfilaPt(M, T, x, y):
    linhas = len(M)
    colunas = len(M[0])

    if 0 <= x < linhas and 0 <= y < colunas and T[x][y] == '':
        T[x][y] = 'azul'
        enfila(x, y)


m = 100  # Capacidade arbitrária grande o suficiente
V = [None] * m
f = -1
r = -1

M = [
    [1, 1, 0, 0],
    [1, 1, 0, 1],
    [0, 0, 1, 1],
    [1, 0, 1, 1]
]

resultado = coloracao(M, 0, 0)

for linha in resultado:
    print(linha)
