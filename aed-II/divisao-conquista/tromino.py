
print('n: ', end='')
n = int(input())
print('x: ', end='')
x = int(input())
print('y: ', end='')
y = int(input())
m = []
qtd = 1

#matriz colorida           
# for i in range(1, n+1):
#     for j in range(1, n+1):
#         if(i == x and j == y):
#             print(f"\033[0;30;42m({i}, {j})\033[m", end='')
#         else:
#             print(f"\033[0;30;41m({i}, {j})\033[m", end='')
#     print()


#cria matriz
def cria_matriz(m, n):
    for i in range(1, n+1):
        linha = []
        for j in range(1, n+1):
            if(j == x and i == y):
                linha.append(1)
            else:
                linha.append(0)
        m.append(linha)

def imprime_matriz(m, n):   
    for i in range(n):
        print(m[i])
    
cria_matriz(m, n)

#imprime matriz 
#imprime_matriz(m, n)

#r e c são as coordenadas do canto superior esquerdo do quadrado
def tromino(m, n, x, y, qtd):
    if(n > 1):
        qtd += 1
        mid = int(n / 2)
        print(f'mid={mid}')
        if(y <= mid and x > mid):
            print('1Q')
            m[mid][mid] = 1
            m[mid][mid-1] = 2
            m[mid-1][mid-1] = 3
            #tromino(m, mid, mid-1, mid-1, qtd)
        if(y <= mid and x <= mid):
            print('2Q')
            m[mid][mid] = 1
            m[mid][mid-1] = 2
            m[mid-1][mid] = 3
        if(y > mid and x <= mid):
            print('3Q')
            m[mid][mid] = 1
            m[mid-1][mid-1] = 2
            m[mid-1][mid] = 3
        if(y > mid and x > mid):
            print('4Q')
            m[mid][mid-1] = 1
            m[mid-1][mid-1] = 2
            m[mid-1][mid] = 3
        #percorrer 1Q, 2Q, 3Q, 4Q
        for i in range(n):
            for j in range(n):
                int 
                m[r+i][c+j]

        

tromino(m, n, x, y, qtd)
imprime_matriz(m, n)
print(m[1][2])
#def colocar_tromino(mid):
    