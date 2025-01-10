#08: Crie a função mat_transposta(matriz). A função deve receber uma matriz genérica bidimensional, de qualquer tamanho (não necessariamente quadrada) e retornar a matriz transposta, sem alterar a matriz original.

lin_A = int(input('Número de linhas da matriz:'))
col_A = int(input('Número de colunas da matriz:'))
A = []

#ler matriz A
for i in range(0, lin_A):
    A.append([])
    for j in range(0, col_A):
        A[i] = float(input(f'valor A[{i}][{j}]:'))

At = []
#fazer transposta
for i in range(0, col_A):
    At.append([])
    for j in range(0, lin_A):
        A[i] = float(input(f'valor A[{i}][{j}]:'))

        
#printar em forma de matriz:
for i in range(lin_A):
    for j in range(col_A):
        print(f'{A[i][j]:^3f}',end='')
    print()        

#def mat_transposta(matriz):
#    matriz_trans = []
#    matriz[i][j] == matriz_trans[j][i]
#    return matriz_trans