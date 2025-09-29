def gauss_jordan_sistema_e_inversa(matriz, b):
    """
    Aplica o Gauss-Jordan para encontrar a matriz inversa e resolver o sistema A x = b.
    matriz: lista de listas (matriz quadrada A).
    b: lista (vetor de termos independentes).
    """

    n = len(matriz)

    # Criamos uma cópia da matriz para manipular
    A = [fila.copy() for fila in matriz]

    # Criamos a matriz aumentada [A | I | b]
    I = [[float(i == j) for j in range(n)] for i in range(n)]

    for i in range(n):
        A[i].append(b[i])

    for i in range(n):
        A[i] += I[i]

    # Agora aplicar o Gauss-Jordan
    for i in range(n):
        pivo = A[i][i]
        if pivo == 0:
            raise Exception("pivote nulo, preciso trocar de linha.")
        
        for j in range(2*n + 1):
            A[i][j] /= pivo

        for k in range(n):
            if k != i:
                fator = A[k][i]
                for j in range(2*n + 1):
                    A[k][j] -= fator * A[i][j]

    # Agora podemos extrair:
    solucoes = [A[i][n] for i in range(n)]

    inversa = [A[i][n+1:] for i in range(n)]

    return solucoes, inversa

def imprimir_matrix(mat):
    for linha in mat:
        print(" ".join([f"{valor:6.2f}" for valor in linha]))

# Exemplo de uso:
A = [
    [1, 1, 3],
    [2, -1, 4],
    [0, -1, 1]
]

b = [5, 11, 3]

solucoes, inversa = gauss_jordan_sistema_e_inversa(A, b)

print("Solução do sistema A x = b:")
print(solucoes)

print("\nMatriz inversa de A:")
imprimir_matrix(inversa)
