# # Definindo o tamanho máximo da fila
# m = 10  # exemplo de tamanho máximo

# # Inicializando a fila
# V = [None] * m  # Vetor de 3-uplas (tuplas de tamanho 3)
# f = 0           # Índice da frente (front)
# r = -1          # Índice do final (rear)

# # Função para inserir na fila
# def enfileirar(V, f, r, m, elemento):
#     if r - f + 1 >= m:
#         print("Fila cheia")
#         return V, f, r
#     r += 1
#     V[r % m] = elemento
#     return V, f, r

# # Função para remover da fila
# def desenfileirar(V, f, r, m):
#     if r < f:
#         print("Fila vazia")
#         return V, f, r, None
#     elemento = V[f % m]
#     V[f % m] = None
#     f += 1
#     return V, f, r, elemento

# # Exemplo de uso
# # Inserindo uma 3-upla
# V, f, r = enfileirar(V, f, r, m, (1, 2, 3))
# V, f, r = enfileirar(V, f, r, m, (4, 5, 6))

# # Removendo uma 3-upla
# V, f, r, elemento = desenfileirar(V, f, r, m)
# print("Removido:", elemento)

# ===== Fila circular global =====
m = 1000
V = [None] * m
f = -1
r = -1

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

def enfila(x, y, z):
    global V, f, r
    if cheia():
        return
    if vazia():
        f = 0
        r = 0
    else:
        r = (r + 1) % m
    V[r] = (x, y, z)

def desenfila():
    global V, f, r
    if vazia():
        return None
    ponto = V[f]
    if f == r:
        f = -1
        r = -1
    else:
        f = (f + 1) % m
    return ponto

# ===== Função enfilaCasa =====
def enfilaCasa(T, x, y, z):
    linhas = len(T)
    colunas = len(T[0])
    if 0 <= x < linhas and 0 <= y < colunas and T[x][y] == -1:
        T[x][y] = z
        enfila(x, y, z)

# ===== Função cavalo =====
def cavalo(T, d, e, x, y):
    linhas = len(T)
    colunas = len(T[0])

    # Inicializa todas as casas com -1
    for i in range(linhas):
        for j in range(colunas):
            T[i][j] = -1

    inicializa(linhas * colunas)
    enfila(d, e, 0)
    T[d][e] = 0

    while not vazia():
        a, b, c = desenfila()
        enfilaCasa(T, a-2, b-1, c+1)
        enfilaCasa(T, a-2, b+1, c+1)
        enfilaCasa(T, a-1, b-2, c+1)
        enfilaCasa(T, a-1, b+2, c+1)
        enfilaCasa(T, a+1, b-2, c+1)
        enfilaCasa(T, a+1, b+2, c+1)
        enfilaCasa(T, a+2, b-1, c+1)
        enfilaCasa(T, a+2, b+1, c+1)

    return T[x][y]()

# Criar um tabuleiro 8x8
T = [[-1 for _ in range(8)] for _ in range(8)]

# Começa em (0,0), quer chegar em (7,7)
min_movimentos = cavalo(T, 0, 0, 7, 7)
print("Mínimo de movimentos:", min_movimentos)
