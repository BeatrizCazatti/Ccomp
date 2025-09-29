colunas = 4
linhas = 3
M = [[0 for i in range(colunas)] for j in range(linhas)]

print(M)

lin = int(input('Número de linhas: '))
col = int(input('Número de colunas: '))
mat = []
for i in range(0, linhas):
     mat.append([])
     for j in range (0, colunas):
        mat[i].append(int(input('Elemento [{}][{}]: 'format(i, j))))
    for j in range(len(mat)):
        for j in range(len(mat[i])):
            print('{:^3}'.format(mat[i][j]), end='')
        print()