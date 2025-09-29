numLinhas = int(input('Número de linhas: '))
numColunas = int(input('Número de colunas: '))
matriz = []

for i in range(0, l):
    matriz.append([])
    print(matriz)
    for j in range(0,c):
        elem = int(input(f'Num[{i},{j}]: ')
        matriz.append([i][j])
        matriz[i][j] = matrizTransposta[j][i]

print(matriz)