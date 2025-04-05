#10: Crie a função multiplica_matriz(mat1, mat2) que deve retornar o produto de duas matrizes bidimensionais genéricas, sem alterar as matrizes originais. A função deve imprimir uma mensagem de erro e retornar um vetor vazio ([]) caso não seja possível realizar o produto das duas matrizes.

def leMat(M, lin, col):
    for i in range(0,lin):
        M.append([])
        for j in range(0,col):
            texto = '['+str(i)+']['+str(j)+']:'
            M[i].append(int(input(texto)))
matA = []
matB = []
matA = leMat(matA,3,3)
matB = leMat(matB,3,3)

col_A = len(matA[0])
print(lin_A, col_A)
for i in range(lin_A):
    for j in range(col_A):
        print(f'{matA[i][j]: ^3}',end='')
    print()   
def multiplica_matriz(mat1, mat2):
    #olunas da matriz 𝐴 for igual ao número de linhas da matriz B
    if lin_A != col_B):
        print('ERRO')
        return []